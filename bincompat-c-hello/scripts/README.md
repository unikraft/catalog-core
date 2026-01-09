# Scripts for Bincompat C Hello on Unikraft

These are companions instruction to the main instructions in the [`README`](README.md).

Use scripts as quick actions for building and running the bincompat C Hello application on Unikraft:

**Note**: Run scripts from the application directory.

## Build for <plat> / <arch>:

```console
./scripts/build/<plat>.<arch>
```

e.g.:

```console
./scripts/build/qemu.x86_64
./scripts/build/fc.x86_64
```

## Build for <plat> / <arch> using a different compiler

```console
CC=/path/to/compiler ./scripts/build/<plat>.<arch>
```

e.g.

```console
CC=/usr/bin/gcc-12 ./scripts/build/qemu.x86_64
CC=/usr/bin/clang ./scripts/build/qemu.x86_64
CC=/usr/bin/gcc-12 ./scripts/build/fc.x86_64
CC=/usr/bin/clang ./scripts/build/fc.x86_64
```

## Run on <plat> / <arch>

```console
./scripts/run/<plat>.<arch>
```

e.g.

```console
./scripts/run/qemu.x86_64
./scripts/run/fc.x86_64
```
