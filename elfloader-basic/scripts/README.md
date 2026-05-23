# Scripts for the Unikraft ELF Loader (basic)

These are companions instruction to the main instructions in the [`README`](README.md).

Use scripts as quick actions for building and running the Unikraft ELF Loader:

**Note**: Run scripts from the application directory.

## Build for platform of choice

```console
./scripts/build/qemu.x86_64
./scripts/build/fc.x86_64
```

## Build for platform of choice using a different compiler

```console
CC=/path/to/compiler ./scripts/build/<plat>.x86_64
```

e.g.

```console
CC=/usr/bin/gcc-12 ./scripts/build/qemu.x86_64
CC=/usr/bin/clang ./scripts/build/qemu.x86_64
CC=/usr/bin/gcc-12 ./scripts/build/fc.x86_64
CC=/usr/bin/clang ./scripts/build/fc.x86_64
```

## Run on platform of choice

```console
./scripts/run/qemu.x86_64
./scripts/run/fc.x86_64
```

## Build and Run for <plat> / <arch> using a different file system  

```console
./scripts/run/<plat>.<arch>.<file_system>
```

e.g.

```console
./scripts/run/qemu.x86_64.9pfs
```
