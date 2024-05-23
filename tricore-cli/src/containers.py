from __future__ import annotations
import docker
import docker.errors
from utils import *
from docker.models.containers import Container
from docker.errors import DockerException
from docker import DockerClient, APIClient
from docker.types import Mount

IMAGE: str = 'francescomecatti/tricore-dev-env:1.0'

class DisposableContainer:
  def __init__(self, image_name: str):
    self._image_name: str = image_name
    self._client: DockerClient | None = None
    self._container: Container | None = None
  
  def __enter__(self) -> DisposableContainer:
    try:
      self._client = docker.from_env()
    except DockerException:
      print('Docker engine not found. Make sure to have a running Docker engine!')
      exit(ExitCode.ENGINE_NOT_STARTED)

    return self
  
  def __exit__(self, type, value, tb) -> None:
    assert self._container, "Invalid container"
    self._container.stop(timeout=1)
    self._container.remove()
  
  def run_async(self, cmd: str, stream_handler_callback) -> int:
    if not self._container: raise RuntimeError("Container not initialized")

    client = APIClient()
    exec_handle = client.exec_create(self._container.id, cmd)
    stream = client.exec_start(exec_handle, stream=True)
    stream_handler_callback(stream)
    return client.exec_inspect(exec_handle['Id']).get('ExitCode')


class BuildDisposableContainer(DisposableContainer):
  SRC_DIR: str = '/home/src'

  def __init__(self, folder: str):
    super().__init__(IMAGE)
    self.__folder = folder
  
  def __enter__(self) -> DisposableContainer:
    super().__enter__()
    assert self._client, "Invalid client"

    try:
      self._client.images.get(IMAGE)
    except docker.errors.ImageNotFound:
      print(f'Downloading container {IMAGE}')
      print_pull_progress(self._client.api.pull(IMAGE, stream=True, decode=True))
      print('Done!\n')
    
    src_folder = Mount(self.SRC_DIR, self.__folder, type='bind')
    self._container = self._client.containers.run(
      self._image_name,
      detach = True,
      stdin_open = True,  # To keep the container alive
      mounts = [src_folder],
      working_dir = BuildDisposableContainer.SRC_DIR
    )

    return self
