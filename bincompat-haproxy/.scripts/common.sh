#!/bin/sh

elfloader_base="elfloader-net"

if ! test -d workdir; then
    mkdir workdir
fi

ln -sfn "../../$elfloader_base/workdir" workdir/base

build_elfloader_base()
{
    app_defconfig="$(pwd)/.scripts/defconfig/$1"

    (
        cd "../$elfloader_base" &&
        ./setup.sh &&
        make distclean &&
        UK_DEFCONFIG="$app_defconfig" make defconfig &&
        touch Makefile.uk &&
        make prepare &&
        make -j"$(nproc)"
    ) || exit 1
}
