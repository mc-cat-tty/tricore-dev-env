import argparse, os
from args import *
from containers import *
from utils import *


def build(args: BuildHanderArgs) -> None:
  GlobalConfiguration().verbosity_level = args.verbosity_level

  abs_path = os.path.abspath(args.folder)
  
  check_file_or_exit(
    os.path.join(abs_path, 'CMakeLists.txt'),
    f'Missing CMakeLists.txt in {abs_path}',
    ExitCode.CMAKE_LISTS_NOT_FOUND
  )

  check_file_or_exit(
    os.path.join(abs_path, 'tricore_toolchain.cmake'),
    f'Missing tricore_toolchain.cmake in {abs_path}',
    ExitCode.CMAKE_TOOLCHAIN_NOT_FOUND
  )
  
  build_path = os.path.join(abs_path, 'build')
  if not os.path.isdir(build_path):
    os.makedirs(build_path)

  CPUS: int = int(os.cpu_count()*1.5) if os.cpu_count() else 2

  with BuildDisposableContainer(abs_path) as build_container:
    print(f'Building source with {CPUS} jobs from {abs_path}')

    exit_if_error(
      build_container.run_async('cmake -B build --toolchain tricore_toolchain.cmake', print_stream),
      "Failed makefiles generation."
    )
    
    exit_if_error(
      build_container.run_async(f'cmake --build build --parallel {CPUS}', print_stream),
      "Build failed."
    )
  
  print(f"Successfully built artifacts in {build_path}.")
    

def flash(args: FlashHandlerArgs) -> None:
  raise NotImplementedError('Feature not implemented yet.')


def main() -> None:
  parser = argparse.ArgumentParser(
    description='Utility script for managing the build of TriCore applications with ease.'
  )
  subparsers = parser.add_subparsers(title='action', required=True)

  build_subparser = subparsers.add_parser(
    'build',
    help='Build projectes for TriCore architecture. A CMake file is required inside SRCDIR directory.'
  )
  build_subparser.add_argument(
    'folder',
    metavar='SRCDIR',
    type=str
  )
  build_subparser.add_argument(
    '-v', '--verbose',
    dest='verbosity_level',
    help='Enable container log on the terminal.',
    action='count',
    default=0,
    required=False
  )
  build_subparser.set_defaults(handler=build)

  flash_subparser = subparsers.add_parser(
    'flash',
    help='Flash Intel-hex binaries on Aurix boards.'
  )
  flash_subparser.add_argument(
    'filename',
    metavar='FILENAME',
    type=str
  )
  flash_subparser.add_argument(
    '-v', '--verbose',
    dest='verbosity_level',
    help='Enable container log on the terminal.',
    action='count',
    default=0,
    required=False
  )
  flash_subparser.set_defaults(handler=flash)

  args = parser.parse_args()
  args.handler(args)

if __name__ == '__main__':
  main()
