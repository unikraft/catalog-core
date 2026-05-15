#!/bin/bash

set -e

TOP="$(realpath "$(dirname "$0")/../..")"
WORKDIR="$TOP/workdir"
KERNEL="$WORKDIR/build/lua-hello_qemu-x86_64"
FS_DIR="$TOP/fs0"

if [ ! -f "$KERNEL" ]; then
  echo "Kernel not found: $KERNEL"
  echo "Build first with: ./scripts/build/qemu-x86_64-9pfs.sh"
  exit 1
fi

mkdir -p "$FS_DIR"

APPEND="${1:-}"

qemu-system-x86_64 \
  -nographic \
  -m 64 \
  -cpu max \
  -kernel "$KERNEL" \
  -fsdev local,id=myid,path="$FS_DIR",security_model=none \
  -device virtio-9p-pci,fsdev=myid,mount_tag=fs0 \
  ${APPEND:+-append "$APPEND"}
