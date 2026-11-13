#!/bin/sh

elfloader_net="elfloader-net"

if ! test -d workdir; then
    mkdir workdir
fi

ln -sfn "../../$elfloader_net/workdir" workdir/base

build_elfloader_base()
{
    APP_DIR=$(pwd)
    
    (
        cd "../$elfloader_net" &&
        ./setup.sh &&
        make distclean &&
        make defconfig UK_DEFCONFIG="$APP_DIR/.scripts/defconfig/$1" &&
        make -j$(nproc)
    ) || exit 1
}
