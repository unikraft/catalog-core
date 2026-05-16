#!/bin/bash

set -e

TOP="$(realpath "$(dirname "$0")/../..")"
WORKDIR="$TOP/workdir"
KERNEL="$WORKDIR/build/lua-hello_qemu-x86_64"
FS_DIR="$TOP/fs0"
SCRIPT_NAME="test_hello.lua"

if [ ! -f "$KERNEL" ]; then
  echo "[FAIL] Kernel not found: $KERNEL"
  echo "Build first with: ./scripts/build/qemu-x86_64-9pfs.sh"
  exit 1
fi

mkdir -p "$FS_DIR"

cat >"$FS_DIR/$SCRIPT_NAME" <<'EOF'
print("Hello from Lua on Unikraft!")
EOF

TIMEOUT=20
OUTPUT=$(timeout "$TIMEOUT" qemu-system-x86_64 \
  -nographic \
  -m 64 \
  -cpu max \
  -kernel "$KERNEL" \
  -fsdev local,id=myid,path="$FS_DIR",security_model=none \
  -device virtio-9p-pci,fsdev=myid,mount_tag=fs0 \
  -append "/$SCRIPT_NAME" 2>&1 || true)

if echo "$OUTPUT" | grep -q "Hello from Lua on Unikraft!"; then
  echo "[PASS] Lua hello test"
  exit 0
else
  echo "[FAIL] Expected output not found"
  echo "--- QEMU output ---"
  echo "$OUTPUT"
  exit 1
fi
