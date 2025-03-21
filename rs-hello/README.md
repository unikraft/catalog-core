# Rust Hello on Unikraft

Build and run a Rust Hello program on Unikraft.
Follow the instructions below to set up, configure, build and run Rust Hello.
Make sure you installed the [requirements](../README.md#requirements) and [the `stable` Rust toolchain channel through Rustup](https://www.rust-lang.org/tools/install).

## Quick Setup (aka TLDR)

For a quick setup, run the commands below.
Note that you still need to install the [requirements](../README.md#requirements) and [the Rust toolchain](https://www.rust-lang.org/tools/install).
Before everything, make sure you run the [top-level `setup.sh` script](../setup.sh).

To build and run the application for `x86_64`, use the commands below:

```console
./setup.sh
make distclean
rustup target add x86_64-unknown-none
cargo +stable rustc -- --emit=obj
wget -O /tmp/defconfig https://raw.githubusercontent.com/unikraft/catalog-core/refs/heads/scripts/rs-hello/scripts/defconfig/qemu.x86_64
UK_DEFCONFIG=/tmp/defconfig make defconfig
make -j $(nproc)
qemu-system-x86_64 -nographic -m 8 -cpu max -kernel workdir/build/rs-hello_qemu-x86_64
```

This will configure, build and run the application, resulting in a `Hello from Unikraft!` message being printed.

Information about every step is detailed below.

## Set Up

Set up the required repositories.
For this, you have two options:

1. Use the `setup.sh` script:

   ```console
   ./setup.sh
   ```

   It will create symbolic links to the required repositories in `../repos/`.
   Be sure to run the [top-level `setup.sh` script](../setup.sh).

   If you want use a custom variant of repositories (e.g. apply your own patch, make modifications), update it accordingly in the `../repos/` directory.

1. Have your custom setup of repositories in the `workdir/` directory.
   Clone, update and customize repositories to your own needs.

## Clean

While not strictly required, it is safest to clean the previous build artifacts:

```console
make distclean
```

## Compile Rust source file

To generate the object file of the Rust source file, use:

```
rustup target add x86_64-unknown-none
cargo +stable rustc -- --emit=obj
```

## Configure

To configure the kernel, use:

```console
make menuconfig
```

In the console menu interface, choose the target architecture (x86_64) and platform (KVM/QEMU).

The end result will be the creation of the `.config` configuration file.

## Build

Build the application for the current configuration:

```console
make -j $(nproc)
```

This results in the creation of the `workdir/build/` directory storing the build artifacts.
The unikernel application image file is `workdir/build/rs-hello_<plat>-<arch>`, where `<plat>` is the platform name (`qemu`), and `<arch>` is the architecture (`x86_64`).

### Use a Different Compiler

If you want to use a different compiler, such as a Clang or a different GCC version, pass the `CC` variable to `make`.

To build with Clang, use the commands below:

```console
make properclean
make CC=clang -j $(nproc)
```

Note that Clang >= 14 is required to build Unikraft.

To build with another GCC version, use the commands below:

```console
make properclean
make CC=gcc-<version> -j $(nproc)
```

where `<version>` is the GCC version, such as `11`, `12`.

Note that GCC >= 8 is required to build Unikraft.

## Run

Run the resulting image using the corresponding platform tool.

A successful run will show a message such as the one below:

```text
Booting from ROM..Powered by
o.   .o       _ _               __ _
Oo   Oo  ___ (_) | __ __  __ _ ' _) :_
oO   oO ' _ `| | |/ /  _)' _` | |_|  _)
oOo oOO| | | | |   (| | | (_) |  _) :_
 OoOoO ._, ._:_:_,\_._,  .__,_:_, \___)
                 Helene 0.18.0~12072b5f
Hello from Unikraft!
```

### Run on QEMU/x86_64

```console
qemu-system-x86_64 -nographic -m 8 -cpu max -kernel workdir/build/rs-hello_qemu-x86_64
```

## Clean Up

Doing a new configuration, or a new build may require cleaning up the configuration and build artifacts.

In order to remove the build artifacts, use:

```console
make clean
```

In order to remove fetched files also, that is the removal of the `workdir/build/` directory, use:

```console
make properclean
```

In order to remove the generated `.config` file as well, use:

```console
make distclean
```

In order to remove the generated files by Cargo in the `target` directory, use:

```console
cargo clean
```
