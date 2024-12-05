#!/bin/sh

test -d repos/unikraft || git clone https://github.com/unikraft/unikraft repos/unikraft
test -d repos/libs/musl || git clone https://github.com/unikraft/lib-musl repos/libs/musl
test -d repos/libs/lwip || git clone https://github.com/unikraft/lib-lwip repos/libs/lwip
test -d repos/libs/libcxx || git clone https://github.com/unikraft/lib-libcxx repos/libs/libcxx
test -d repos/libs/libcxxabi || git clone https://github.com/unikraft/lib-libcxxabi repos/libs/libcxxabi
test -d repos/libs/libunwind || git clone https://github.com/unikraft/lib-libunwind repos/libs/libunwind
test -d repos/libs/compiler-rt || git clone https://github.com/unikraft/lib-compiler-rt repos/libs/compiler-rt
test -d repos/libs/nginx || git clone https://github.com/unikraft/lib-nginx repos/libs/nginx
test -d repos/libs/python3 || git clone https://github.com/unikraft/lib-python3 repos/libs/python3
test -d repos/libs/libelf || git clone https://github.com/unikraft/lib-libelf repos/libs/libelf
test -d repos/apps/elfloader || git clone https://github.com/unikraft/app-elfloader repos/apps/elfloader
