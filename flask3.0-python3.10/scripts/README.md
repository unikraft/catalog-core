# Scripts for Flask 3.0 Python3.10 on Unikraft

These are companion instructions to the main instructions in the [`README`](../README.md).

Use scripts as quick actions for building and running Flask 3.0 Python3.10 on Unikraft.

**Note**: Run scripts from the application directory.

## Build for <plat> / <arch>

```console
./scripts/build/<plat>.<arch>
```

e.g.:

```console
./scripts/build/qemu.x86_64
./scripts/build/qemu.arm64
./scripts/build/fc.x86_64
./scripts/build/xen.arm64
```

## Build for <plat> / <arch> using a different compiler or toolchain

```console
CC=/path/to/compiler ./scripts/build/<plat>.<arch>
```

e.g.

```console
CC=/usr/bin/gcc-12 ./scripts/build/qemu.x86_64
CC=/usr/bin/aarch64-linux-gnu-gcc-12 ./scripts/build/qemu.arm64
CC=/usr/bin/clang ./scripts/build/qemu.x86_64
CC=/usr/bin/clang ./scripts/build/qemu.arm64
CC=/usr/bin/gcc-12 ./scripts/build/fc.x86_64
CC=/usr/bin/aarch64-linux-gnu-gcc-12 ./scripts/build/fc.arm64
CC=/usr/bin/clang ./scripts/build/fc.x86_64
CC=/usr/bin/clang ./scripts/build/fc.arm64
```

For `arm64` builds, the scripts default to `CROSS_COMPILE=aarch64-linux-gnu-`
when neither `CC` nor `CROSS_COMPILE` is set.
Override it explicitly if your cross toolchain uses a different prefix:

```console
CROSS_COMPILE=aarch64-none-linux-gnu- ./scripts/build/qemu.arm64
```

## Run on <plat> / <arch>

```console
./scripts/run/<plat>.<arch>
```

e.g.

```console
./scripts/run/qemu.x86_64
./scripts/run/qemu.arm64
./scripts/run/fc.x86_64
./scripts/run/xen.arm64
```
