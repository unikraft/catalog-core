#!/bin/sh

elfloader_base="elfloader-basic"

if ! test -d workdir; then
    mkdir workdir
fi

ln -sfn "../../$elfloader_base/workdir" workdir/base

build_elfloader_base()
{
    (
        cd "../$elfloader_base" &&
        ./setup.sh &&
        make distclean &&
        "./scripts/build/$1"
    ) || exit 1
}
