import docker
from docker.errors import DockerException
from docker import DockerClient
from operator import attrgetter
from itertools import chain
from typing import Any, Callable
import argparse

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
def build(client: DockerClient, args: Any) -> None:
  out = client.containers.run(IMAGE, 'ls /', remove=True)
  print(out)


@container_startup
def flash(client: DockerClient, args: Any) -> None:
  raise NotImplementedError("Feature not implemented yet")


if __name__ == '__main__':
  parser = argparse.ArgumentParser(description='Utility script for managing the build of TriCore applications with ease.')
  subparsers = parser.add_subparsers(title='action', required=True)

  build_subparser = subparsers.add_parser('build', help='Build a project for TriCore architecture. A CMake file is required.')
  build_subparser.add_argument('folder', metavar='BASEDIR', type=str)
  build_subparser.add_argument('-v', '--verbose', help='Enable container log on the terminal.', action='count', default=0, required=False)
  build_subparser.set_defaults(handler=build)

  flash_subparser = subparsers.add_parser('flash', help='Flash a .hex binary file to a board.')
  flash_subparser.add_argument('filename', metavar='FILENAME', type=str)
  flash_subparser.add_argument('-v', '--verbose', help='Enable container log on the terminal.', action='count', default=0, required=False)
  flash_subparser.set_defaults(handler=flash)

  args = parser.parse_args()
  args.handler(args)
