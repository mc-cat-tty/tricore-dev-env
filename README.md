# Development Environment for Tricore GCC + ERIKA Enterprise


## Examples
Please, note that the linker script _.lsl_ file is not the default one provided by [Infineon Code Examples](https://github.com/Infineon/AURIX_code_examples). It has been downloaded from this [URL](https://nextcloud.hightec-rt.com/index.php/s/BG72PCMP7jrEcki), as suggested by [AURIX Development Studio - Guide for HighTec Toolchains](https://free-entry-toolchain.hightec-rt.com/aurix_dev_studio_with_hightec_gcc.pdf).

### How to build and example?
If you have not already exported binutils and gcc paths into PATH env var, do the following:
```bash
export PATH=/Users/francesco/Downloads/binutils-tc/install/bin/:$PATH
export PATH=/Users/francesco/Downloads/gcc-tc/install/bin/:$PATH
```

Be aware that your path may change. It is tightly bound to the configuration of your environment.

```bash
cd examples/Blinky_LED_1_KIT_TC397_TFT
mkdir build
cd build
cmake --toolchain tricore_toolchain.cmake .. && make -j12
```

_12_ is the number of jobs I decided to pass to `make`; find your own tuning.

You should now see the result of the compilation, namely _Blinky_ - for this specific project -, in the _build_ folder: `file Blinky`. If `file` spits out something like `ELF 32-bit [...] Siemens Tricore Embedded Processor`, everything should be ok.

Now let's convert the ELF to the HEX format (if not already done by the build system): `tricore-elf-objcopy -j .text -j .data -O ihex Blinky Blinky.hex`
