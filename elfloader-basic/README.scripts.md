# Scripts for the Unikraft ELF Loader (basic)

These are companions instruction to the main instructions in the [`README`](README.md).

Use scripts as quick actions for building and running the Unikraft ELF Loader:

## Build for platform of choice

```console
./build.qemu.x86_64
./build.fc.x86_64
```

## Build for platform of choice using a different compiler

```console
CC=/path/to/compiler ./build.<plat>.x86_64
```

e.g.

```console
CC=/usr/bin/gcc-12 ./build.qemu.x86_64
CC=/usr/bin/clang ./build.qemu.x86_64
CC=/usr/bin/gcc-12 ./build.fc.x86_64
CC=/usr/bin/clang ./build.fc.x86_64
```

## Run on platform of choice

```console
./run.qemu.x86_64
./run.fc.x86_64
```
