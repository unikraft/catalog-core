# Web Assembly (WAMR) on Unikraft

This application runs a wasm file.
Follow the instructions below to set up, configure, build and run wamr.

## Work with the Basic Build & Run Toolchain

### Quick Setup (aka TLDR)

For a quick setup, run the commands below.
Note that you still need to install the [requirements](#requirements).

For building and running everything for `x86_64`, follow the steps below:

```console
./setup.sh
make distclean
./scripts/build/qemu.x86_64
./scripts/run/qemu.x86_64
```

This will configure, build and run the `main.wasm` file via Wamr.
You can see how to test it in the [running section](#run).

### Requirements

In order to set up, configure, build and run wamr on Unikraft, the following packages are required:

* `build-essential` / `base-devel` / `@development-tools` (the meta-package that includes `make`, `gcc` and other development-related packages)
* `sudo`
* `flex`
* `bison`
* `git`
* `wget`
* `uuid-runtime`
* `qemu-system-x86`
* `qemu-kvm`
* `sgabios`

GCC >= 8 is required to build wamr on Unikraft.

On Ubuntu/Debian or other `apt`-based distributions, run the following command to install the requirements:

```console
$ apt-get install -y --no-install-recommends \
  build-essential \
  sudo \
  libncurses-dev \
  libyaml-dev \
  flex \
  bison \
  git \
  wget \
  uuid-runtime \
  qemu-kvm \
  qemu-system-x86 \
  sgabios
```

### Set Up

Set up the required repositories. For this, you have two options:

#### 1.  Use the `setup.sh` script:
  ```console
  ./setup.sh
  ```

  It will create symbolic links to the required repositories in `../repos/`. Be sure to run the top-level `setup.sh` script.

  If you want use a custom variant of repositories (e.g. apply your own patch, make modifications), update it accordingly in the `../repos/` directory.


#### 2. Have your custom setup of repositories in the `workdir/` directory. Clone, update and customize repositories to your own needs.

  Use the `tree` command to inspect the contents of the `workdir/` directory:

  ```console
  tree -F -L 2 workdir/
  ```

  The layout of the `workdir/` directory should look something like this:

  ```text
    workdir/
    |-- libs/
    |   |-- lwip/
    |   |-- musl/
    |   `-- wamr/
    `-- unikraft/
        |-- arch/
        |-- Config.uk
        |-- CONTRIBUTING.md
        |-- COPYING.md
        |-- include/
        |-- lib/
        |-- Makefile
        |-- Makefile.uk
        |-- plat/
        |-- README.md
        |-- support/
        `-- version.mk

  9 directories, 7 files
  ```

## Clean

While not strictly required, it is safest to clean the previous build artifacts:

```console
make distclean
```

## Configure

To configure the kernel, use:

```console
make menuconfig
```

In the console menu interface, choose the target architecture (x86_64 or ARMv8 or ARMv7) and platform (Xen or KVM/QEMU or KVM/Firecracker).

The end result will be the creation of the `.config` configuration file.

## Build

Build the application for the current configuration:

```console
make -j $(nproc)
```

This results in the creation of the `workdir/build/` directory storing the build artifacts.
The unikernel application image file is `workdir/build/wamr_<plat>-<arch>`, where `<plat>` is the platform name (`qemu`, `fc`, `xen`), and `<arch>` is the architecture (`x86_64` or `arm64`).


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

### Build the Filesystem

The filesystem is to be packed into `rootfs.cpio`, an initial ramdisk CPIO file.
Use the command below for that:

```console
rm -f initrd.cpio
./workdir/unikraft/support/scripts/mkcpio rootfs.cpio ./rootfs/
```

## Run

Run the resulting image using the corresponding platform tool.
Firecracker requires KVM support.

A successful run will show a message such as the one below:

```text
Powered by
o.   .o       _ _               __ _
Oo   Oo  ___ (_) | __ __  __ _ ' _) :_
oO   oO ' _ `| | |/ /  _)' _` | |_|  _)
oOo oOO| | | | |   (| | | (_) |  _) :_
 OoOoO ._, ._:_:_,\_._,  .__,_:_, \___)
             Prometheus 0.14.0~14b1ee3d
Hello world!
buf ptr: 0x400002b0
buf: 1234
```

### Run on QEMU/x86_64

To create CPIO archive, use the commands below:

```console
cd rootfs
find -depth -print | tac | bsdcpio -o --format newc > ../rootfs.cpio
cd ..
```

Now run the Unikraft image:

```console
sudo qemu-system-x86_64 \
    -nographic \
    -m 32 \
    -cpu max \
    -append 'vfs.fstab=[ "initrd0:/:extract::ramfs=1:" ] -- /main.wasm' \
    -kernel workdir/build/wamr_qemu-x86_64 \
    -initrd "$PWD/rootfs.cpio"
```

### Build and Run with Firecracker

[Firecracker](https://firecracker-microvm.github.io/) is a lightweight VMM (*virtual machine manager*) that can be used as more efficient alternative to QEMU.

Configure and build commands are similar to a QEMU-based build with an initrd-based filesystem:

```console
./scripts/build/make-fc-x86_64-initrd.sh
```

To use Firecraker, you need to download a [Firecracker release](https://github.com/firecracker-microvm/firecracker/releases).
You can use the commands below to make the `firecracker-x86_64` executable from release v1.4.0 available globally in the command line:

```console
cd /tmp 
wget https://github.com/firecracker-microvm/firecracker/releases/download/v1.4.0/firecracker-v1.4.0-x86_64.tgz
tar xzf firecracker-v1.4.0-x86_64.tgz 
sudo cp release-v1.4.0-x86_64/firecracker-v1.4.0-x86_64 /usr/local/bin/firecracker-x86_64
```

To run a unikernel image, you need to configure a JSON file.
This is the `scripts/run/fc-x86_64-initrd.json` file.
This configuration file is uses as part of the run command:

```console
./scripts/run/fc-x86_64-initrd.sh
```

Same as running with QEMU, the application will start:

```text
Powered by
o.   .o       _ _               __ _
Oo   Oo  ___ (_) | __ __  __ _ ' _) :_
oO   oO ' _ `| | |/ /  _)' _` | |_|  _)
oOo oOO| | | | |   (| | | (_) |  _) :_
 OoOoO ._, ._:_:_,\_._,  .__,_:_, \___)
             Prometheus 0.14.0~14b1ee3d
Hello world!
buf ptr: 0x400002b0
buf: 1234
```

## Clean Up

Doing a new configuration, or a new build, may require cleaning up the configuration and build artifacts.

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
