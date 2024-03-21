# TriCore CLI
A utility script for interacting with containerized TriCore development environment.

## Usage
### Build

Make sure to be in the top-level directory of a project (i.e. a folder with some source code, a CMakeLists.txt and the _tricore\_toolchain.cmake_ toolchain file provided in _project-template_ folder).

Then, run this to build the project:
```bash
tricorecli build .
# OR
python3 -m tricorecli build .
```

If the build is successful, a file _.hex_ is generated inside the _build_ directory of the project.

### Flash
> The flash tool is work in progress; at the moment, the preferred solution is to use Infineon MemTool, feeding it with the .hex binary image.