# Click on Unikraft

This application starts a [Click](https://github.com/sysml/clickos) program with Unikraft.
Follow the instructions below to set up, configure, build and run Click.

## Quick Setup (aka TLDR)

For a quick setup, run the commands below.
Note that you still need to install the [requirements](#requirements).

For building and running everything for Qemu in `x86_64`, follow the steps below:

```console
make distclean
./setup.sh
wget -O /tmp/defconfig https://raw.githubusercontent.com/unikraft/catalog-core/refs/heads/main/click/.scripts/defconfig/qemu.x86_64
UK_DEFCONFIG=/tmp/defconfig make defconfig
make -j $(nproc)
sudo ip link set dev virbr0 down 2> /dev/null
sudo ip link del dev virbr0 2> /dev/null
sudo ip link add dev virbr0 type bridge
sudo ip address add 172.44.0.1/24 dev virbr0
sudo ip link set dev virbr0 up

sudo qemu-system-x86_64 \
    -netdev bridge,id=en0,br=virbr0 -device virtio-net-pci,netdev=en0 \
    -append "netdev.ipv4_addr=172.44.0.2 netdev.ipv4_gw_addr=172.44.0.1 netdev.ipv4_subnet_mask=255.255.255.0 --" \
    -kernel workdir/build/click_qemu-x86_64 \
    -initrd helloworld.click \
    -nographic
```

This will configure, build and run the `click` application.

The same can be done for Qemu in `AArch64`, by running the commands below:

```console
make distclean
./setup.sh
wget -O /tmp/defconfig https://raw.githubusercontent.com/unikraft/catalog-core/refs/heads/main/click/.scripts/defconfig/qemu.arm64
UK_DEFCONFIG=/tmp/defconfig make defconfig
make -j $(nproc)
sudo ip link set dev virbr0 down 2> /dev/null
sudo ip link del dev virbr0 2> /dev/null
sudo ip link add dev virbr0 type bridge
sudo ip address add 172.44.0.1/24 dev virbr0
sudo ip link set dev virbr0 up

sudo qemu-system-aarch64 \
    -netdev bridge,id=en0,br=virbr0 -device virtio-net-pci,netdev=en0 \
    -append "netdev.ipv4_addr=172.44.0.2 netdev.ipv4_gw_addr=172.44.0.1 netdev.ipv4_subnet_mask=255.255.255.0 --" \
    -kernel workdir/build/click_qemu-arm64 \
    -initrd helloworld.click \
    -machine virt -cpu max \
    -nographic
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

* The Unikraft core repository: [`unikraft`](https://github.com/unikraft/unikraft)
* Library repositories:
  * The networking stack library: [`lib-lwip`](https://github.com/unikraft/lib-lwip)
  * The Musl libc library: [`lib-musl`](https://github.com/unikraft/lib-musl)
  * The Click library: [`lib-click`](https://github.com/unikraft/lib-click)

For the setup, while inside the `click/` directory, run the `setup.sh` script to create the necessary folders and link them to the downloaded libraries:

     ```console
      ./setup.sh
     ```


## Configure

Configuring, building and running a Unikraft application depends on our choice of platform and architecture.
Currently, supported platforms are QEMU (KVM), Xen and linuxu.
QEMU (KVM) is known to be working, so we focus on that.

Supported architectures are x86_64 and AArch64.

To configure the kernel, use:
```console
make menuconfig
```

In the console menu interface, choose the target architecture (x86_64 or ARMv8 or ARMv7) and platform (Xen or KVM/QEMU or KVM/Firecracker). After choosing the target architecture and the platform, go into `Library Configuration` and select musl library, inside lwip library deselect `Automatically attach netifs`, inside Click library select `Enable Click main function`. Then save the configuration.

This results in the creation of the `.config` file:

```console
ls .config
.config
```

The `.config` file will be used in the build step.

## Build

Build the application for the current configuration:
```console
make -j $(nproc)
```

For x86_64:

```text
[...]
  LD      click_qemu-x86_64.dbg
  UKBI    click_qemu-x86_64.dbg.bootinfo
  SCSTRIP click_qemu-x86_64
  GZ      click_qemu-x86_64.gz
make[1]: Leaving directory '[...]/click/.unikraft/unikraft'
```

For AArch64:
```text
[...]
  LD      click_qemu-arm64.dbg
  UKBI    click_qemu-arm64.dbg.bootinfo
  SCSTRIP click_qemu-arm64
  GZ      click_qemu-arm64.gz
make[1]: Leaving directory '[...]/click/.unikraft/unikraft'
```


At the end of the build command, the `click-x86_64` unikernel image is generated.
This image is to be used in the run step.

Building uses as input the `.config` file from above, and results in a unikernel image as output.
The unikernel output image, together with intermediary build files, are stored in the `workdir/build/` directory.

This will print a list of files that are generated by the build system.


## Clean Up

Before starting a build on a different platform or architecture, you must clean up the build output.
This may also be required in case of a new configuration.

Cleaning up is done with 3 possible commands:

* `make clean`: cleans all actual build output files (binary files, including the unikernel image)
* `make properclean`: removes the entire `workdir/build/` directory
* `make distclean`: removes the entire `workdir/build/` directory **and** the `.config` file

Typically, you would use `make properclean` to remove all build artifacts, but keep the configuration file.

## Run

The resulting image can be run with the `qemu-system-*` commands.
In order to run the `click` helloworld application, you need to first set up a network bridge.
To do this, you need the following commands:
```console
sudo ip link set dev virbr0 down 2> /dev/null
sudo ip link del dev virbr0 2> /dev/null
sudo ip link add dev virbr0 type bridge
sudo ip address add 172.44.0.1/24 dev virbr0
sudo ip link set dev virbr0 up
```

## QEMU x86_64

To run the QEMU x86_64 build, use the commands below:

```console
sudo qemu-system-x86_64 \
    -netdev bridge,id=en0,br=virbr0 -device virtio-net-pci,netdev=en0 \
    -append "netdev.ipv4_addr=172.44.0.2 netdev.ipv4_gw_addr=172.44.0.1 netdev.ipv4_subnet_mask=255.255.255.0 --" \
    -kernel workdir/build/click_qemu-x86_64 \
    -initrd helloworld.click \
    -nographic
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

## QEMU AArch64

To run the AArch64 build, use the commands below:

```console
sudo qemu-system-aarch64 \
    -netdev bridge,id=en0,br=virbr0 -device virtio-net-pci,netdev=en0 \
    -append "netdev.ipv4_addr=172.44.0.2 netdev.ipv4_gw_addr=172.44.0.1 netdev.ipv4_subnet_mask=255.255.255.0 --" \
    -kernel workdir/build/click_qemu-arm64 \
    -initrd helloworld.click \
    -machine virt -cpu max \
    -nographic
```

Similar to running for x86_64, this will start the `click` helloworld application.
Similarly, to close the QEMU Click instance, use the `Ctrl+a x` keyboard shortcut.
