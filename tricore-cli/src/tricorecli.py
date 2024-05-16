import argparse, os
from typing import Callable
from arglists import *

import docker
from docker.errors import DockerException
from docker import DockerClient
from docker.types import Mount
from operator import attrgetter
from itertools import chain

import time

IMAGE: str = 'francescomecatti/tricore-dev-env:1.0'

def container_startup(f) -> Callable:
  def inner(*args, **kwargs):
    try:
      client = docker.from_env()
    except DockerException:
      print('Docker engine not found. Make sure to have a running Docker engine!')
      exit(1)

    installed_images = chain.from_iterable(
      map(
        attrgetter('tags'),
        client.images.list()
      )
    )

    if IMAGE not in installed_images:
      print(f'Downloading container {IMAGE}...')
      client.images.pull(IMAGE)
      print('Done!')
    
    f(client, *args, **kwargs)
  
  return inner


@container_startup
def build(client: DockerClient, args: BuildHanderArgs) -> None:
  abs_path = args.folder if os.path.isabs(args.folder) else os.path.join(os.getcwd(), args.folder)
  
  if not os.path.isfile(os.path.join(abs_path, 'CMakeLists.txt')):
    print(f'Missing CMakeLists.txt in {abs_path}')
    exit(2)
  
  if not os.path.isfile(os.path.join(abs_path, 'tricore_toolchain.cmake')):
    print(f'Missing tricore_toolchain.cmake in {abs_path}')
    exit(3)

  build_path = os.path.join(abs_path, 'build')
  if not os.path.isdir(build_path):
    os.makedirs(build_path)

  SRC_DIR: str = '/home/src'
  CPUS: int = int(os.cpu_count()*1.5) if os.cpu_count() else 2
  src_folder = Mount(SRC_DIR, abs_path, type='bind')

  print(f'Building source from {args.folder}')

  c = client.containers.run(
    IMAGE,
    detach=True,
    stdin_open=True,  # To keep the container alive
    mounts=[src_folder],
    working_dir=SRC_DIR
  )
  r = c.exec_run('cmake -B build --toolchain tricore_toolchain.cmake', stream=True)
  
  for s in r:
    if s:
      for l in s:
        if (l): print(l.decode('utf-8'), end='')

  print(f"Building with {CPUS} jobs...")
  
  r = c.exec_run(f'cmake --build build --parallel {CPUS}', stream=True)
  
  for s in r:
    if s:
      for l in s:
        if (l): print(l.decode('utf-8'))
  
  c.stop(timeout=1)
  c.remove()


@container_startup
def flash(client: DockerClient, args: FlashHandlerArgs) -> None:
  raise NotImplementedError('Feature not implemented yet')


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
