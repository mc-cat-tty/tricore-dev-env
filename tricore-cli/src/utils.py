import os
from enum import UNIQUE, IntEnum, auto, verify
from typing import Generator
from rich.progress import Progress

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

def print_pull_progress(stream: Generator):
  tasks: dict = {}

  with Progress() as progress_bar:
    for line_dict in stream:
      match line_dict['status']:
        case 'Downloading': id = f"Downloading {line_dict['id']}"
        case 'Extracting': id = f"Extracting {line_dict['id']}"
        case _: continue
      
      if id not in tasks:
        tasks[id] = progress_bar.add_task(id, completed=line_dict['progressDetail']['current'], total=line_dict['progressDetail']['total'])
      else:
        progress_bar.update(tasks[id], completed=line_dict['progressDetail']['current'])
