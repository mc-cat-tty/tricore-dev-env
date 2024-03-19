#!/bin/bash

function failure_handler() { EV=$?; echo "Installation not completed. Error $EV on line $1" >&2; exit $EV; }
trap "failure_handler $LINENO" ERR

# Working directory
MY_PATH=$(realpath $0)
MY_DIR=$(dirname $MY_PATH)

# Source directories
BINUTILS_SRC_PATH=$MY_DIR/tricore-binutils-gdb
GCC_SRC_PATH=$MY_DIR/tricore-gcc
NEWLIB_SRC_PATH=$MY_DIR/tricore-newlib-cygwin

# Build directories
mkdir $MY_DIR/{gcc-build,newlib-build,binutils-build}
BINUTILS_BUILD_PATH=$MY_DIR/binutils-build
GCC_BUILD_PATH=$MY_DIR/gcc-build
NEWLIB_BUILD_PATH=$MY_DIR/newlib-build

DEFAULT_INSTALL_PATH=$MY_DIR/install
# Set INSTALL_PATH to DEFAULT_INSTALL_PATH if not defined
: ${INSTALL_PATH:=$DEFAULT_INSTALL_PATH}
INSTALL_PATH=$(realpath $INSTALL_PATH)
[ "$INSTALL_PATH" == "$DEFAULT_INSTALL_PATH" ] || mkdir $DEFAULT_INSTALL_PATH

# Compute JOBS as 1.5*CPUS; truncante to int
JOBS=$(echo "1.5 * $(nproc) / 1" | bc)
HOST=$($GCC_SRC_PATH/config.guess)

# Build binutils
cd $BINUTILS_BUILD_PATH
${BINUTILS_SRC_PATH}/configure \
  --host=${HOST} \
  --target=tricore-elf \
  --prefix=${INSTALL_PATH} \
  --disable-threads \
  --disable-werror \
  --enable-nls \
  --disable-itcl \
  --disable-tk \
  --disable-tcl \
  --disable-winsup \
  --disable-gdbtk \
  --disable-libgui \
  --disable-rda \
  --disable-sid \
  --disable-sim \
  --disable-gdb \
  --disable-newlib \
  --disable-libgloss \
  --disable-test-suite
make -j${JOBS}
make install

# Export install/bin to PATH
PATH="$INSTALL_PATH/bin":$PATH

# Prepare for gcc build
cd $GCC_SRC_PATH && bash contrib/download_prerequisites

# Build gcc
cd $GCC_BUILD_PATH
$GCC_SRC_PATH/configure \
CFLAGS_FOR_TARGET='-ffreestanding' MAKEINFO='missing' \
  --host=${HOST} \
  --target=tricore-elf \
  --prefix=${INSTALL_PATH} \
  --enable-languages=c,c++ \
  --disable-bootstrap \
  --disable-werror \
  --with-as=${INSTALL_PATH}/bin/tricore-elf-as \
  --with-ld=${INSTALL_PATH}/bin/tricore-elf-ld \
  --enable-c99 \
  --enable-long-long \
  --enable-checking \
  --enable-nls \
  --enable-static \
  --disable-threads \
  --disable-shared \
  --with-headers=yes \
  --with-newlib=yes \
  --enable-mingw-wildcard \
  --disable-libstdcxx-pch \
  --enable-newlib-elix-level=3 \
  --enable-newlib-io-long-long \
  --disable-newlib-supplied-syscalls \
  --disable-libssp \
  --disable-test-suite \
  --enable-lib32 \
  --disable-lib64
make -j${JOBS} all-gcc
make install-gcc

# Build libgcc
make -j${JOBS} all-target-libgcc
make install-target-libgcc

# Build newlib
cd $NEWLIB_BUILD_PATH
$NEWLIB_SRC_PATH/configure \
  --target=tricore-elf \
  --host=${HOST} \
  --prefix=${INSTALL_PATH} \
  --with-as=${INSTALL_PATH}/bin/tricore-elf-as \
  --with-ld=${INSTALL_PATH}/bin/tricore-elf-ld
make -j${JOBS} all
make install