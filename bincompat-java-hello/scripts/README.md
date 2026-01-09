# Scripts for the Unikraft Java Hello

These are companions instruction to the main instructions in the [`README`](README.md).

Use scripts as quick actions for building and running the Unikraft Java Hello:

**Note**: Run scripts from the application directory.

## Build for Qemu

```console
./scripts/build/qemu.x86_64
```

## Build for Qemu using a different compiler

```console
CC=/path/to/compiler ./scripts/build/qemu.x86_64
```

e.g.

```console
CC=/usr/bin/gcc-12 ./scripts/build/qemu.x86_64
CC=/usr/bin/clang ./scripts/build/qemu.x86_64
```

## Run on Qemu

```console
./scripts/run/qemu.x86_64
```
