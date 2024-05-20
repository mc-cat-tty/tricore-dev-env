cmake_minimum_required(VERSION 3.22)
project(FreeRTOS_Test LANGUAGES C)

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
  -fmessage-length=0
  -fno-common
  -fstrict-volatile-bitfields
  -fdata-sections
  -ffunction-sections
  -mcpu=tc39xx
)
add_link_options(
  -nocrt0
  -Wl,--gc-sections
  -mcpu=tc39xx
  -T../Lcf_Gnuc_Tricore_Tc.lsl
)

file(GLOB_RECURSE source_dirs *.c)
add_executable(FreeRTOS_Test ${source_dirs})

include_directories(
  ${header_dirs}
  /tricore-build-tools/tricore-elf/include
)

add_custom_command(
  TARGET FreeRTOS_Test POST_BUILD
  COMMAND tricore-elf-objcopy -O ihex FreeRTOS_Test FreeRTOS_Test.hex
  COMMENT "Extracting HEX from ELF..."
)
