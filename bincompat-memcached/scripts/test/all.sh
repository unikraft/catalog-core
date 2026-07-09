#!/bin/sh

test_build()
{
    printf "%-46s ... " build."$1"
    ./scripts/build/"$1" > ./scripts/test/log/build."$1" 2>&1
    if test $? -eq 0; then
        echo "PASSED"
    else
        echo "FAILED"
    fi
}

test_build_run()
{
    printf "%-46s ... " build."$1"
    ./scripts/build/"$1" > ./scripts/test/log/build."$1" 2>&1
    if test $? -eq 0; then
        echo "PASSED"
    else
        echo "FAILED"
        return 1
    fi

    printf "    %-42s ... " run."$1"
    ./scripts/test/wrapper.sh ./scripts/run/"$1" 2> ./scripts/test/log/run."$1"
}

./setup.sh
test -d ./scripts/test/log || mkdir ./scripts/test/log
test_build_run qemu.x86_64
if test -w /dev/kvm; then
    test_build_run fc.x86_64
else
    test_build fc.x86_64
    printf "    %-42s ... SKIPPED (no /dev/kvm)\n" run.fc.x86_64
fi
