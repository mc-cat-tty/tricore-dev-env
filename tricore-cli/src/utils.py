import os
from enum import UNIQUE, IntEnum, auto, verify
from typing import Generator
from rich.progress import Progress

@verify(UNIQUE)
class ExitCode(IntEnum):
  ENGINE_NOT_STARTED = auto()
  CMAKE_LISTS_NOT_FOUND = auto()
  CMAKE_TOOLCHAIN_NOT_FOUND = auto()


class GlobalConfiguration:
  __instance = None

  def __new__(cls, *args, **kwargs):
    if not cls.__instance:
      cls.__instance = super().__new__(cls, *args, **kwargs)
      return cls.__instance

    return cls.__instance

  @property
  def verbosity_level(self) -> int:
    return self.__verbosity_level
  
  @verbosity_level.setter
  def verbosity_level(self, vl: int) -> None:
    self.__verbosity_level: int = vl


def check_file_or_exit(file_path: str, error_msg: str = "", exit_code: int = 1):
  if os.path.isfile(file_path): return
  
  print(error_msg)
  exit(exit_code)

def exit_if_error(exit_code: int, msg: str):
  if exit_code == 0: return
  print(msg)
  exit(exit_code)

def print_stream(exec_stream):
  skip_print: bool = GlobalConfiguration().verbosity_level < 1

  for line in exec_stream:
    if skip_print: continue
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
