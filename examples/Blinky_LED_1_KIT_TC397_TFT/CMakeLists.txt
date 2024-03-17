cmake_minimum_required(VERSION 3.27)
project(Blinky LANGUAGES C)

# List all files and subdirectories in Libraries and Configurations folders
file(GLOB_RECURSE libraries_headers LIST_DIRECTORIES true Libraries/*.h)
file(GLOB_RECURSE configurations_headers LIST_DIRECTORIES true Configurations/*.h)

# Create a "set" (actually, a list without duplicates) of subdirs by stripping filenames
set(header_dirs "")
foreach(header_path in items ${libraries_headers} ${configurations_headers})
  get_filename_component(dir_path ${header_path} DIRECTORY)
  set(header_dirs ${header_dirs} ${dir_path})
endforeach()
list(REMOVE_DUPLICATES header_dirs)

# Disable the following predicate to print include directories
# message(STATUS "Including: ${header_dirs}")

add_compile_definitions(__HIGHTEC__)
add_compile_options(
  -mcpu=tc39xx
  -nocrt0
  -Wl,--gc-sections
)
add_link_options(
  -mcpu=tc39xx
  -nocrt0
  -T../Lcf_Gnuc_Tricore_Tc.lsl
)

file(GLOB_RECURSE source_dirs *.c)
add_executable(Blinky ${source_dirs})

include_directories(
  ${header_dirs}
  /Users/francesco/Downloads/newlib-tc/install/tricore-elf/include
)