#!/bin/sh
# Build and test the dnsmasq unikernel.
# Usage: all.sh [<target>]   e.g. all.sh qemu.x86_64
# With no target, runs every target (x86_64 + arm64).

test_build()
{
    printf "%-46s ... " build."$1"
    ./.scripts/build/"$1" > ./.scripts/test/log/build."$1" 2>&1
    rc=$?
    if test $rc -eq 0; then
        echo "PASSED"
    else
        echo "FAILED"
    fi
    return $rc
}

test_build_run()
{
    printf "%-46s ... " build."$1"
    ./.scripts/build/"$1" > ./.scripts/test/log/build."$1" 2>&1
    rc=$?
    if test $rc -eq 0; then
        echo "PASSED"
    else
        echo "FAILED"
        return $rc
    fi

    printf "    %-42s ... " run."$1"
    ./.scripts/test/wrapper.sh ./.scripts/run/"$1" 2> ./.scripts/test/log/run."$1"
    return $?
}

# arm64 is build-only for now , DNSSEC validation fails and every forwarded
# query SERVFAILs : Re-enable with test_build_run once the clock works.
run_target()
{
    case "$1" in
        fc.*|*arm64*) test_build "$1" ;;
        *)            test_build_run "$1" ;;
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
