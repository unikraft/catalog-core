#!/bin/sh

test_build()
{
    printf "%-46s ... " build."$1"
    ./build."$1" > log.build."$1" 2>&1
    if test $? -eq 0; then
        echo "PASSED"
    else
        echo "FAILED"
    fi
}

test_build_run()
{
    printf "%-46s ... " build."$1"
    ./build."$1" > log.build."$1" 2>&1
    if test $? -eq 0; then
        echo "PASSED"
    else
        echo "FAILED"
    fi

    printf "    %-42s ... " run."$1"
    ./test.wrapper.sh ./run."$1" 2> log.run."$1"
}

test_build_run qemu.x86_64
test_build_run qemu.arm64
test_build_run fc.x86_64
test_build fc.arm64
test_build xen.x86_64
test_build xen.arm64
