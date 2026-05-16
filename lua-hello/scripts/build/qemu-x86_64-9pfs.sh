#!/bin/bash

set -e

WORKDIR="$(realpath "$(dirname "$0")/../../workdir")"
TOP="$(realpath "$(dirname "$0")/../..")"
DEFCONFIG="$(realpath "$(dirname "$0")/../defconfigs/qemu-x86_64-9pfs")"

# 1. Apply defconfig
UK_DEFCONFIG="$DEFCONFIG" \
  make -C "$WORKDIR/unikraft" A="$TOP" \
  L="$WORKDIR/libs/musl:$WORKDIR/libs/lua" \
  O="$WORKDIR/build" defconfig

# 2. Build
make -C "$WORKDIR/unikraft" A="$TOP" \
  L="$WORKDIR/libs/musl:$WORKDIR/libs/lua" \
  O="$WORKDIR/build" -j"$(nproc)"
