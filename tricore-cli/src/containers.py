import docker
from docker.models.containers import Container
from docker.errors import DockerException
from docker import DockerClient
from docker.types import Mount
from operator import attrgetter
from itertools import chain


class DisposableContainer:
  def __init__(self, image_name: str):
    self._image_name: str = image_name
    self._client: DockerClient | None = None
    self._container: Container | None = None
  
  def __enter__(self):
    self._client = docker.from_env()
    # Manage exceptions
    return self._container
  
  def __exit__(self, type, value, tb):
    if not self._container: return
    self._container.stop(timeout=1)
    self._container.remove()


class BuildDisposableContainer(DisposableContainer):
  SRC_DIR: str = '/home/src'
  IMAGE: str = 'francescomecatti/tricore-dev-env:1.0'

  def __init__(self, folder: str):
    super().__init__(self.IMAGE)
    self.__folder = folder
  
  def __enter__(self):
    super().__enter__()
    if not self._client: return

    src_folder = Mount(self.SRC_DIR, self.__folder, type='bind')
    self._container = self._client.containers.run(
      self._image_name,
      detach = True,
      stdin_open = True,  # To keep the container alive
      mounts = [src_folder],
      working_dir = BuildDisposableContainer.SRC_DIR
    )

    if not self._container: raise RuntimeError("sdfas") 
    return self._container
