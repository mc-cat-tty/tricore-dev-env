import os
from enum import UNIQUE, IntEnum, auto, verify

@verify(UNIQUE)
class ExitCode(IntEnum):
  ENGINE_NOT_STARTED = auto()
  CMAKE_LISTS_NOT_FOUND = auto()
  CMAKE_TOOLCHAIN_NOT_FOUND = auto()

def check_file_or_exit(file_path: str, error_msg: str = "", exit_code: int = 1):
  if os.path.isfile(file_path): return
  
  print(error_msg)
  exit(exit_code)

def print_stream(exec_result):
  for line in exec_result.output:
    print(line.decode('utf-8'), end='')