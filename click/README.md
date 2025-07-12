# Click on Unikraft

This application starts a [Click](https://github.com/sysml/clickos) program with Unikraft.
Follow the instructions below to set up, configure, build and run Click.

## Quick Setup (aka TLDR)

For a quick setup, run the commands below.
Note that you still need to install the [requirements](#requirements).

For building and running everything for `x86_64`, follow the steps below, inside the catalog-core directory:

```console
cd click/
./setup.sh
UK_DEFCONFIG=$(pwd)/.config.click-qemu-x86_64 make defconfig
make -j $(nproc)
./run-qemu-x86_64.sh
```

This will configure, build and run the `click` application.

The same can be done for `AArch64`, by running the commands below:

```console
make properclean
UK_DEFCONFIG=$(pwd)/.config.click-qemu-aarch64 make defconfig
make -j $(nproc)
./run-qemu-aarch64.sh
```

Similar to the `x86_64` build, this will start the `click` application.
Information about every step is detailed below.

## Requirements

In order to set up, configure, build and run Click on Unikraft, the following packages are required:

* `build-essential` / `base-devel` / `@development-tools` (the meta-package that includes `make`, `gcc` and other development-related packages)
* `sudo`
* `flex`
* `bison`
* `git`
* `wget`
* `uuid-runtime`
* `qemu-system-x86`
* `qemu-system-arm`
* `qemu-kvm`
* `sgabios`
* `gcc-aarch64-linux-gnu`

On Ubuntu/Debian or other `apt`-based distributions, run the following command to install the requirements:

```console
sudo apt install -y --no-install-recommends \
  build-essential \
  sudo \
  gcc-aarch64-linux-gnu \
  libncurses-dev \
  libyaml-dev \
  flex \
  bison \
  git \
  wget \
  uuid-runtime \
  qemu-kvm \
  qemu-system-x86 \
  qemu-system-arm \
  sgabios
```

Running Click Unikraft with QEMU requires networking support.
For this to work properly a specific configuration must be enabled for QEMU.
Run the commands below to enable that configuration (for the network bridge to work):

```console
sudo mkdir /etc/qemu/
echo "allow all" | sudo tee /etc/qemu/bridge.conf
```

## Set Up

The following repositories are required for Click:

* The application repository (this repository): [`app-click`](https://github.com/unikraft/app-click)
* The Unikraft core repository: [`unikraft`](https://github.com/unikraft/unikraft)
* Library repositories:
  * The networking stack library: [`lib-lwip`](https://github.com/unikraft/lib-lwip)
  * The Musl libc library: [`lib-musl`](https://github.com/unikraft/lib-musl)
  * The Click library: [`lib-click`](https://github.com/unikraft/lib-click)

Follow the steps below for the setup:

  1. First clone the [`app-click` repository](https://github.com/unikraft/app-click) in the `click/` directory:

     ```console
     git clone https://github.com/unikraft/app-click click
     ```

     Enter the `click/` directory:

     ```console
     cd click/

     ls -F
     ```

     This will print the contents of the repository:

     ```text
     .config.click-qemu-aarch64  .config.click-qemu-x86_64  fs0/  kraft.yaml  Makefile  Makefile.uk  README.md helloworld.click
     ```

  1. While inside the `click/` directory, create the `.unikraft/` directory:

     ```console
     mkdir .unikraft
     ```

     Enter the `.unikraft/` directory:

     ```console
     cd .unikraft/
     ```

  1. While inside the `.unikraft` directory, clone the [`unikraft` repository](https://github.com/unikraft/unikraft):

     ```console
     git clone https://github.com/unikraft/unikraft unikraft
     ```

  1. While inside the `.unikraft/` directory, create the `libs/` directory:

     ```console
     mkdir libs
     ```

  1. While inside the `.unikraft/` directory, clone the library repositories in the `libs/` directory:

     ```console
     git clone https://github.com/unikraft/lib-lwip libs/lwip
     git clone https://github.com/unikraft/lib-musl libs/musl
     git clone https://github.com/unikraft/lib-click libs/click
     ```

  1. Get back to the application directory:

     ```console
     cd ../
     ```

     Use the `tree` command to inspect the contents of the `.unikraft/` directory.
     It should print something like this:

     ```console
     tree -F -L 2 .unikraft/
     ```

     The layout of the `.unikraft/` directory should look something like this:

     ```text
     .unikraft/
     |-- libs/
     |   `-- lwip/
     |   `-- musl/
     |   `-- click/
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

     10 directories, 7 files
     ```

## Configure

Configuring, building and running a Unikraft application depends on our choice of platform and architecture.
Currently, supported platforms are QEMU (KVM), Xen and linuxu.
QEMU (KVM) is known to be working, so we focus on that.

Supported architectures are x86_64 and AArch64.

Use the corresponding the configuration files (`.config-...`), according to your choice of platform and architecture.

### QEMU x86_64

Use the `.config.click-qemu-x86_64` configuration file together with `make defconfig` to create the configuration file:

```console
UK_DEFCONFIG=$(pwd)/.config.click-qemu-x86_64 make defconfig
```

This results in the creation of the `.config` file:

```console
ls .config
.config
```

The `.config` file will be used in the build step.

### QEMU AArch64

Use the `.config.click-qemu-aarch64` configuration file together with `make defconfig` to create the configuration file:

```console
UK_DEFCONFIG=$(pwd)/.config.click-qemu-aarch64 make defconfig
```

Similar to the x86_64 configuration, this results in the creation of the `.config` file that will be used in the build step.

## Build

Building uses as input the `.config` file from above, and results in a unikernel image as output.
The unikernel output image, together with intermediary build files, are stored in the `build/` directory.

### Clean Up

Before starting a build on a different platform or architecture, you must clean up the build output.
This may also be required in case of a new configuration.

Cleaning up is done with 3 possible commands:

* `make clean`: cleans all actual build output files (binary files, including the unikernel image)
* `make properclean`: removes the entire `build/` directory
* `make distclean`: removes the entire `build/` directory **and** the `.config` file

Typically, you would use `make properclean` to remove all build artifacts, but keep the configuration file.

### QEMU x86_64

Building for QEMU x86_64 assumes you did the QEMU x86_64 configuration step above.
Build the Unikraft Click image for QEMU x86_64 by using the command below:

```console
make -j $(nproc)
```

This will print a list of files that are generated by the build system.

```text
[...]
  LD      click_qemu-x86_64.dbg
  UKBI    click_qemu-x86_64.dbg.bootinfo
  SCSTRIP click_qemu-x86_64
  GZ      click_qemu-x86_64.gz
make[1]: Leaving directory '[...]/click/.unikraft/unikraft'
```

At the end of the build command, the `click-x86_64` unikernel image is generated.
This image is to be used in the run step.

### QEMU AArch64

If you had configured and build a unikernel image for another platform or architecture (such as x86_64) before, then:

1. Do a cleanup step with `make properclean`.

1. Configure for QEMU AAarch64, as shown above.

1. Follow the instructions below to build for QEMU AArch64.

Building for QEMU AArch64 assumes you did the QEMU AArch64 configuration step above.
Build the Unikraft Click image for QEMU AArch64 by using the same command as for x86_64:

```console
make -j $(nproc)
```

This will print a list of files that are generated by the build system.

```text
[...]
  LD      click_qemu-arm64.dbg
  UKBI    click_qemu-arm64.dbg.bootinfo
  SCSTRIP click_qemu-arm64
  GZ      click_qemu-arm64.gz
make[1]: Leaving directory '[...]/click/.unikraft/unikraft'
```

Similarly to x86_64, at the end of the build command, the `click-arm64` unikernel image is generated.
This image is to be used in the run step.

## Run

The resulting image can be run with the `qemu-system-*` commands.
In order to run the `click` helloworld application, you need to first set up a network bridge.
All this is part of the `./run-qemu-*.sh` scripts.

### QEMU x86_64

To run the QEMU x86_64 build, use `./run-qemu-x86_64.sh`:

```console
./run-qemu-x86_64.sh
```

This will start the `click` helloworld application:

```text
SeaBIOS (version 1.16.0-debian-1.16.0-5)

iPXE (https://ipxe.org) 00:03.0 CA00 PCI2.10 PnP PMM+06FCAFC0+06F0AFC0 CA00
                                                    
Powered by
o.   .o       _ _               __ _
Oo   Oo  ___ (_) | __ __  __ _ ' _) :_
oO   oO ' _ `| | |/ /  _)' _` | |_|  _)
oOo oOO| | | | |   (| | | (_) |  _) :_
 OoOoO ._, ._:_:_,\_._,  .__,_:_, \___)
      Prometheus 0.14.0~c66cdc68-custom
Received config (length 144):
define($MAC0 52:54:00:12:34:56);
/* End unikraft-provided MAC preamble */
FromDevice
  -> Print('Hello, World!')
  -> EtherMirror
  -> ToDevice;
Hello, World!:   90 | 33330000 0016fe93 a0e40183 86dd6000 00000024 00010000
Hello, World!:  130 | 33330000 00160af9 d92a3d5f 86dd6000 0000004c 0001fe80
[router_thread:200] Starting driver...

Hello, World!:   86 | 3333ffe4 0183fe93 a0e40183 86dd6000 00000020 3aff0000
Hello, World!:   90 | 33330000 0016fe93 a0e40183 86dd6000 00000024 00010000
```

To close the QEMU `click` application, use the `Ctrl+a x` keyboard shortcut;
that is press the `Ctrl` and `a` keys at the same time and then, separately, press the `x` key.

### QEMU AArch64

To run the AArch64 build, use `./run-qemu-aarch64.sh`:

```console
./run-qemu-aarch64.sh
```

Similar to running for x86_64, this will start the `click` helloworld application.
Similarly, to close the QEMU Click instance, use the `Ctrl+a x` keyboard shortcut.
