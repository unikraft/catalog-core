#!/bin/sh

test_build()
{
    printf "%-46s ... " build."$1"
    ./.scripts/build/"$1" > ./.scripts/test/log/build."$1" 2>&1
    if test $? -ne 0; then
        echo "FAILED"
        exit 1
    fi
    echo "PASSED"
}

test_run()
{
    printf "    %-42s ... " run."$1"
    ./.scripts/test/wrapper.sh ./.scripts/run/"$1" 2> ./.scripts/test/log/run."$1"
}

test_build_run()
{
    test_build "$1"
    test_run "$1"
}

./setup.sh
test -d ./.scripts/test/log || mkdir ./.scripts/test/log
test_build_run qemu.x86_64
test_build_run fc.x86_64
