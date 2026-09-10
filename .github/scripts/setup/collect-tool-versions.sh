#!/usr/bin/env bash

set -e

{
  echo "QEMU Version: $(qemu-system-x86_64 --version 2>/dev/null | head -n1 || echo 'not available')"
  echo "Firecracker Version: $(firecracker-$(uname -m) --version 2>/dev/null | head -n1 || echo 'not available')"
  echo "Docker Version: $(docker --version 2>/dev/null || echo 'not available')"
  echo "GCC Version: $(gcc --version 2>/dev/null | head -n1 || echo 'not available')"
  echo "Clang Version: $(clang --version 2>/dev/null | head -n1 || echo 'not available')"
  echo "Runner: $(uname -a)"
} > tool-versions.txt

cat tool-versions.txt
