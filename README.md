# Development Environment for Tricore GCC + ERIKA Enterprise

## Setup
This repository serves as an aggregator for 3 conceptually different projects, but tightly bound to each other:
 1. A containerized cross-compiler for TriCore architecture
 2. A flasher for AURIX development boards (WIP)
 3. A utility Python package for interacting with both of them (mimicking the Platform IO workflow: build, flash, monitor)

### The easy way
Both the cross-compiler container and the Python package are published "pre-coocked" on an online repository:
 - [tricore-dev-env on Docker Hub](https://hub.docker.com/repository/docker/francescomecatti/tricore-dev-env)
 - [tricore-cli on PyPI](https://pypi.org/project/tricore-cli/)

Make sure that Python3 and a Docker Engine are installed on your system and run:
```bash
docker pull francescomecatti/tricore-dev-env:1.0
pip3 install tricore-cli
```

You shold now be able to run:
```bash
docker run -it CONTAINER_TAG
```

And, in case it exits:
```bash
docker start -ai CONTAINER_ID
```
to restore it.

This is exactly what `tricorecli SUBCMD DIR` runs under the hood (through the Docker SDK for Python). To mount a **host**'s directory into the container, a **bind mount** is used by the script.

That's all! Move to [Examples - Containerized installation](#containerized-installation) for the build process.

### Manual system-wide installation
First of all, clone this repository:
```bash
git clone --recurse-submodules --shallow-submodules https://github.com/mc-cat-tty/tricore-dev-env
```

In order to install the toolchain on your system, the following steps are required:
 1. Build _binutils_ for TC target
 2. Build GCC for TC traget
 3. Build, at least, _libgcc_ for TC target
 4. Build _newlib_ for TC target

Apart from the third point, this sequence must be kept in order, since _bintuils_ (`as`, `ar`, `ld`, etc.) are needed by `gcc`; and, in turn, `newlib` requires a fully-functional `gcc` to be bult (plus the linker and the assembler).

The build procedure is automated by _build-toolchain/install.sh_ script. Feel free to tinker around with the build script.
The proposed set of flags make the compilation successfull on both _Darwin/arm64_ and _Linux/amd64_ platforms.

The install directory of the script can be customized with `INSTALL_PATH` environment variable:
```bash
INSTALL_PATH=/home/foo bash build-toolchain/install.sh
```

In case of missing `nproc` in your system, replace `JOBS` variable with a reasonable value; typically 1.5 times the number of cores on your machine.

### Manual containerized installation
First of all, clone this repository:
```bash
git clone --recurse-submodules --shallow-submodules https://github.com/mc-cat-tty/tricore-dev-env
```

Make sure that a Docker Engine is installed and running on your system:
```bash
cd tricore-dev-env
docker build -t CONTAINER_TAG .
```

The `build` subcommand requires a _Dockerfile_ to be present in the build directory. This file instructs the docker client about the building steps.

You might want to avoid the copy of some source files during the build process - for instance, because they are not ready to be embedded into the container; _.dockerignore_ serves exactly this purpose.

Both the aforementioned files are located in the top-directory of this project, so that you can build up your own on top of them.

You shold now be able to run:
```bash
docker run -it CONTAINER_TAG
```

And, in case it exits:
```bash
docker start -ai CONTAINER_ID
```
to restore it.

## Examples
Please, note that the linker script _.lsl_ file is not the default one provided by [Infineon Code Examples](https://github.com/Infineon/AURIX_code_examples). It has been downloaded from this [URL](https://nextcloud.hightec-rt.com/index.php/s/BG72PCMP7jrEcki), as suggested by [AURIX Development Studio - Guide for HighTec Toolchains](https://free-entry-toolchain.hightec-rt.com/aurix_dev_studio_with_hightec_gcc.pdf).

### How to build and example?
#### Containerized Installation
Make sure that the dependencies described [here](#the-easy-way) are installed - and running, in the case of the Docker Engine - on your system.

Pick and example, for instance _Blinky_LED\_1\_KIT\_TC397\_TFT_:
```bash
cd examples/Blinky_LED_1_KIT_TC397_TFT
tricorecli build .
```

If the build process is successful, a new _build_ directory should appear in the project's top folder. Inside _build_ you can find two **compilation artifacts**:
 - _Blinky_
 - _Blinky.hex_

_Blinky.hex_ is the format expected by Infineon MemTool.

#### System-wide installation
If you have not already exported binutils and gcc paths into PATH env var, do the following:
```bash
export PATH=/your/path/binutils-tc/install/bin/:$PATH
export PATH=your/path/gcc-tc/install/bin/:$PATH
```

Be aware that your path may be different. It depends on the configuration of your environment.

```bash
cd examples/Blinky_LED_1_KIT_TC397_TFT
mkdir build
cd build
cmake --toolchain tricore_toolchain.cmake .. && make -j12
```

_12_ is the number of jobs I decided to pass to `make`; find your own tuning. Usually `1.5 * $(nproc)`.

You should now see the result of the compilation, namely _Blinky_ - for this specific project -, in the _build_ folder: `file Blinky`. If `file` spits out something like `ELF 32-bit [...] Siemens Tricore Embedded Processor`, everything should be ok.

Now let's convert the ELF to the HEX format (already done by the build system, in the latest version of the project): `tricore-elf-objcopy -j .text -j .data -O ihex Blinky Blinky.hex`.

### Internals
The _CMakeLists.txt_ and _tricore\_toolchain.cmake_ do the trick. Noteworthy directives are:
 - `set(CMAKE_C_COMPILER tricore-elf-gcc)` chooses the right cross-compiler. Omitting this leads to the use of the system's compiler, which is not - almost for sure - a compier that supports TriCore architecture as a target.
 - `set(CMAKE_SYSROOT /tricore-build-tools/tricore-elf)` sets the compiler _sysroot_, namely the path where libraries (both heaers, under _/include_ and static/dynamic libraries, under _/lib_) like `libc`, `libm`, `crt` (C RunTime), etc. are searched. Read more about it on the [GCC manual](https://gcc.gnu.org/onlinedocs/gcc/Directory-Options.html).
 - `project(... LANGUAGES C)` disables C++ language. Enabling C++ raises some errors at the moment.
 - `add_compile_definitions(__HIGHTEC__)` defines a macro required by iLLD libraires.
 - `add_compiler_options(...) and add_link_options(...)` are described [here](https://free-entry-toolchain.hightec-rt.com/aurix_dev_studio_with_hightec_gcc.pdf). `-mcpu=XXXX` must be coherent with the CPU of your board. Run `tricore-elf-gcc --target-help` to get the complete list of supported CPUs and architectures.
 - `include_directories(... /tricore-build-tools/tricore-elf/include)` includes the header files of _newlib_. 

Note that `set(CMAKE_SYSROOT /tricore-build-tools/tricore-elf)` and `include_directories(... /tricore-build-tools/tricore-elf/include)` are probably useless in the context of a single installation path for GCC, binutils and newlib; but, they are necessary if the installation paths of these tools differ. 
In particular, they should point to the install directory of _newlib_.

## Create a new project
At the moment, projects have to be created by hand.

Some useful resources are:
 - [iLLD drivers](https://www.infineon.com/cms/en/tools/aurix-embedded-sw/aurix-illd-drivers/)
 - [Linker scripts](https://nextcloud.hightec-rt.com/index.php/s/BG72PCMP7jrEcki)
 - [CMakeLists.txt template](project-template/CMakeLists.txt)
 - [tricore_toolchain.cmake](project-template/tricore_toolchain.cmake)
