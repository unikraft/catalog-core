#!/bin/sh

./setup.sh
test -d ./.scripts/test/log || mkdir -p ./.scripts/test/log

printf "%-46s ... " build.qemu.x86_64
./.scripts/build/qemu.x86_64 > ./.scripts/test/log/build.qemu.x86_64 2>&1
if test $? -eq 0; then
    echo "PASSED"
else
    echo "FAILED"
    exit 1
fi

printf "%-46s ... " run.qemu.x86_64
./.scripts/test/run-and-check.sh
