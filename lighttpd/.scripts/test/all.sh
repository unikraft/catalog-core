#!/bin/sh
# Build and test the lighttpd unikernel.
# Usage: all.sh [<target>]   e.g. all.sh qemu.x86_64
# With no target, runs every target.

test_build()
{
    printf "%-46s ... " build."$1"
    ./.scripts/build/"$1" > ./.scripts/test/log/build."$1" 2>&1
    if test $? -eq 0; then
        echo "PASSED"
    else
        echo "FAILED"
    fi
}

test_build_run()
{
    printf "%-46s ... " build."$1"
    ./.scripts/build/"$1" > ./.scripts/test/log/build."$1" 2>&1
    if test $? -eq 0; then
        echo "PASSED"
    else
        echo "FAILED"
    fi

    printf "    %-42s ... " run."$1"
    ./.scripts/test/wrapper.sh ./.scripts/run/"$1" 2> ./.scripts/test/log/run."$1"
}

run_target()
{
    case "$1" in
        fc.*) test_build "$1" ;;
        *)    test_build_run "$1" ;;
    esac
}

./setup.sh
test -d ./.scripts/test/log || mkdir ./.scripts/test/log
if test -n "$1"; then
    run_target "$1"
else
    run_target qemu.x86_64
    run_target qemu.arm64
    run_target fc.x86_64
    run_target fc.arm64
fi
