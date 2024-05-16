from typing import NamedTuple

class BuildHanderArgs(NamedTuple):
  folder: str
  verbosity_level: int

class FlashHandlerArgs(NamedTuple):
  filename: str
  verbosity_level: int