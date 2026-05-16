#!/bin/bash

set -e

TOP="$(realpath "$(dirname "$0")/../..")"
WORKDIR="$TOP/workdir"
KERNEL="$WORKDIR/build/lua-hello_qemu-x86_64"
FS_DIR="$TOP/fs0"
INITRD="$WORKDIR/build/fs0.cpio"

if [ ! -f "$KERNEL" ]; then
  echo "Kernel not found: $KERNEL"
  echo "Build first with: ./scripts/build/qemu-x86_64-initrd.sh"
  exit 1
fi

# Pack fs0/ into a CPIO initrd archive
if [ -d "$FS_DIR" ]; then
  (cd "$FS_DIR" && find . | cpio -o -H newc >"$INITRD")
  INITRD_OPT="-initrd $INITRD"
else
  INITRD_OPT=""
fi

APPEND="${1:-}"

qemu-system-x86_64 \
  -nographic \
  -m 64 \
  -cpu max \
  -kernel "$KERNEL" \
  $INITRD_OPT \
  ${APPEND:+-append "$APPEND"}
