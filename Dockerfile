FROM ubuntu:22.04

LABEL org.opencontainers.image.authors="Francesco Mecatti"
LABEL version="1.0"

COPY . /home/dev-env
WORKDIR /home/dev-env

# Setup
ENV DEPENDENCIES "texinfo build-essential git flex bison vim curl bc"
RUN set -ex && apt update && apt install --no-install-recommends -y ${DEPENDENCIES}

# Install and cleanup
ENV INSTALL_PATH /tricore-build-tools
RUN set -ex && bash build-toolchain/install.sh && cd .. && rm -rf dev-env

ENV PATH /tricore-build-tools/bin:${PATH}
WORKDIR /home
