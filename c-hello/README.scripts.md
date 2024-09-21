# Scripts for C Hello on Unikraft

These are companions instruction to the main instructions in the [`README`](README.md).

Use scripts as quick actions for building and running C Hello on Unikraft.

## Build for <plat> / <arch>:

```console
./build.<plat>.<arch>
```

e.g.:

```console
./build.qemu.x86_64
./build.qemu.arm64
./build.fc.x86_64
./build.xen.arm64
```

## Build for <plat> / <arch> using a different compiler

```console
CC=/path/to/compiler ./build.<plat>.<arch>
```

e.g.

```console
CC=/usr/bin/gcc-12 ./build.qemu.x86_64
CC=/usr/bin/aarch64-linux-gnu-gcc-12 ./build.qemu.arm64
CC=/usr/bin/clang ./build.qemu.x86_64
CC=/usr/bin/clang ./build.qemu.arm64
CC=/usr/bin/gcc-12 ./build.fc.x86_64
CC=/usr/bin/aarch64-linux-gnu-gcc-12 ./build.fc.arm64
CC=/usr/bin/clang ./build.fc.x86_64
CC=/usr/bin/clang ./build.fc.arm64
```

## Run on <plat> / <arch>

```console
./run.<plat>.<arch>
```

e.g.

```console
./run.qemu.x86_64
./run.qemu.arm64
./run.fc.x86_64
./run.xen.arm64
```
