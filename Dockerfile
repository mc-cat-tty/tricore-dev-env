FROM ubuntu:22.04

COPY . /home/dev-env
WORKDIR /home/dev-env

ENV DEPENDENCIES "texinfo build-essential git flex bison vim curl bc"
ENV INSTALL_PATH /tricore-build-tools

RUN set -ex && \
  apt update && apt install --no-install-recommends -y ${DEPENDENCIES} && \
  bash build-toolchain/install.sh && \
  cd .. && rm -rf dev-env && \
  apt clean && rm -rf /var/lib/apt/lists/*

ENV PATH /tricore-build-tools/bin:${PATH}
WORKDIR /home
