# Scripts for Click on Unikraft

These are companion instructions to the main instructions in the [`README`](README.md).

Use scripts as quick actions for building and running Click Application on Unikraft.

**Note**: Run scripts from the application directory.

## Build for <plat> / <arch>:

```console
./scripts/build/<plat>.<arch>
```

e.g.:

```console
./scripts/build/qemu.x86_64
./scripts/build/qemu.arm64
```

## Build for <plat> / <arch> using a different compiler

```console
CC=/path/to/compiler ./scripts/build/<plat>.<arch>
```

e.g.

```console
CC=/usr/bin/gcc-12 ./scripts/build/qemu.x86_64
CC=/usr/bin/aarch64-linux-gnu-gcc-12 ./scripts/build/qemu.arm64
CC=/usr/bin/clang ./scripts/build/qemu.x86_64
CC=/usr/bin/clang ./scripts/build/qemu.arm64
```

## Run on <plat> / <arch>

```console
./scripts/run/<plat>.<arch>
```

e.g.

```console
./scripts/run/qemu.x86_64
./scripts/run/qemu.arm64
```
