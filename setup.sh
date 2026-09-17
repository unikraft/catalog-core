#!/bin/sh

BRANCH="${1:-${BRANCH:-staging}}"

test -d repos/unikraft || git clone -b "$BRANCH" https://github.com/unikraft/unikraft repos/unikraft
test -d repos/libs/musl || git clone -b "$BRANCH" https://github.com/unikraft/lib-musl repos/libs/musl
test -d repos/libs/lwip || git clone -b "$BRANCH" https://github.com/unikraft/lib-lwip repos/libs/lwip
test -d repos/libs/libcxx || git clone -b "$BRANCH" https://github.com/unikraft/lib-libcxx repos/libs/libcxx
test -d repos/libs/libcxxabi || git clone -b "$BRANCH" https://github.com/unikraft/lib-libcxxabi repos/libs/libcxxabi
test -d repos/libs/libunwind || git clone -b "$BRANCH" https://github.com/unikraft/lib-libunwind repos/libs/libunwind
test -d repos/libs/compiler-rt || git clone -b "$BRANCH" https://github.com/unikraft/lib-compiler-rt repos/libs/compiler-rt
test -d repos/libs/nginx || git clone -b "$BRANCH" https://github.com/unikraft/lib-nginx repos/libs/nginx
test -d repos/libs/python3 || git clone -b "$BRANCH" https://github.com/unikraft/lib-python3 repos/libs/python3
test -d repos/libs/click || git clone -b "$BRANCH" https://github.com/unikraft/lib-click.git repos/libs/click
test -d repos/libs/libelf || git clone -b "$BRANCH" https://github.com/unikraft/lib-libelf repos/libs/libelf
test -d repos/apps/elfloader || git clone -b "$BRANCH" https://github.com/unikraft/app-elfloader repos/apps/elfloader
test -d repos/libs/redis || git clone -b "$BRANCH" https://github.com/unikraft/lib-redis repos/libs/redis
test -d repos/libs/wamr || git clone -b "$BRANCH" https://github.com/unikraft/lib-wamr repos/libs/wamr
test -d repos/libs/sqlite || git clone -b "$BRANCH" https://github.com/unikraft/lib-sqlite repos/libs/sqlite
