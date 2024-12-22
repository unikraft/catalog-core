# C HTTP server on Unikraft

Build and run a simple C HTTP server on Unikraft.
Follow the instructions below to set up, configure, build and run C HTTP.
Make sure you installed the [requirements](../README.md#requirements).

## Quick Setup (aka TLDR)

For a quick setup, run the commands below.
Note that you still need to install the [requirements](../README.md#requirements).
Before everything, make sure you run the [top-level `setup.sh` script](../setup.sh).

**Note**: This is a network application.
For using QEMU, enable bridged networking, as instructed in the [top-level `README.md`](../README.md#qemu):

```console
echo "allow all" | sudo tee /etc/qemu/bridge.conf
```

To build and run the application for `x86_64`, use the commands below:

```console
./setup.sh
make distclean
wget -O /tmp/defconfig https://raw.githubusercontent.com/unikraft/catalog-core/refs/heads/scripts/c-http/scripts/defconfig/qemu.x86_64
UK_DEFCONFIG=/tmp/defconfig make defconfig
make -j $(nproc)
sudo ip link set dev virbr0 down
sudo ip link del dev virbr0
sudo ip link add dev virbr0 type bridge
sudo ip address add 172.44.0.1/24 dev virbr0
sudo ip link set dev virbr0 up
sudo qemu-system-x86_64 \
    -nographic \
    -m 8 \
    -cpu max \
    -netdev bridge,id=en0,br=virbr0 -device virtio-net-pci,netdev=en0 \
    -append "c-http netdev.ip=172.44.0.2/24:172.44.0.1::: -- " \
    -kernel workdir/build/c-http_qemu-x86_64
```

This will configure, build and run C HTTP on Unikraft.
You can see how to test it in the ["Test" section](#test).
To close the virtual machine, see the instructions in the ["Close QEMU" section](#close-qemu).

To do the same for `AArch64`, run the commands below:

```console
./setup.sh
make distclean
wget -O /tmp/defconfig https://raw.githubusercontent.com/unikraft/catalog-core/refs/heads/scripts/c-http/scripts/defconfig/qemu.arm64
UK_DEFCONFIG=/tmp/defconfig make defconfig
make -j $(nproc)
sudo ip link set dev virbr0 down
sudo ip link del dev virbr0
sudo ip link add dev virbr0 type bridge
sudo ip address add 172.44.0.1/24 dev virbr0
sudo ip link set dev virbr0 up
sudo qemu-system-aarch64 \
    -nographic \
    -machine virt \
    -m 8 \
    -cpu max \
    -netdev bridge,id=en0,br=virbr0 -device virtio-net-pci,netdev=en0 \
    -append "c-http netdev.ip=172.44.0.2/24:172.44.0.1::: -- " \
    -kernel workdir/build/c-http_qemu-arm64
```

Similar to the `x86_64` build, this will configure, build and run C HTTP on Unikraft.

Information about every step and about other types of builds is detailed below.

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
The unikernel application image file is `workdir/build/c-http_<plat>-<arch>`, where `<plat>` is the platform name (`qemu`, `fc`, `xen`), and `<arch>` is the architecture (`x86_64` or `arm64`).

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
Firecracker requires KVM support.
Xen requires a system with Xen installed.

A successful run will show a message such as the one below:

```text
en1: Added
en1: Interface is up
Powered by
o.   .o       _ _               __ _
Oo   Oo  ___ (_) | __ __  __ _ ' _) :_
oO   oO ' _ `| | |/ /  _)' _` | |_|  _)
oOo oOO| | | | |   (| | | (_) |  _) :_
 OoOoO ._, ._:_:_,\_._,  .__,_:_, \___)
                Calypso 0.17.0~5d38d108
```

This means that the C HTTP server runs on Unikraft and waiting for connections.

### Run on QEMU/x86_64

To set up networking, use the commands below:

```console
# Remove previously created network interfaces. Ignore missing device errors.
sudo ip link set dev virbr0 down
sudo ip link del dev virbr0
sudo ip link set dev tap0 down
sudo ip link del dev tap0
# Create bridge interface for QEMU networking.
sudo ip link add dev virbr0 type bridge
sudo ip address add 172.44.0.1/24 dev virbr0
sudo ip link set dev virbr0 up
```

Now run the Unikraft image:

```console
sudo qemu-system-x86_64 \
    -nographic \
    -m 8 \
    -cpu max \
    -netdev bridge,id=en0,br=virbr0 -device virtio-net-pci,netdev=en0 \
    -append "c-http netdev.ip=172.44.0.2/24:172.44.0.1::: -- " \
    -kernel workdir/build/c-http_qemu-x86_64
```

You need use `sudo` or the `root` account to run QEMU with bridged networking.

### Run on QEMU/ARM64

To set up networking, use the commands below:

```console
# Remove previously created network interfaces. Ignore missing device errors.
sudo ip link set dev virbr0 down
sudo ip link del dev virbr0
sudo ip link set dev tap0 down
sudo ip link del dev tap0
# Create bridge interface for QEMU networking.
sudo ip link add dev virbr0 type bridge
sudo ip address add 172.44.0.1/24 dev virbr0
sudo ip link set dev virbr0 up
```

Now run the Unikraft image:

```console
sudo qemu-system-aarch64 \
    -nographic \
    -machine virt \
    -m 8 \
    -cpu max \
    -netdev bridge,id=en0,br=virbr0 -device virtio-net-pci,netdev=en0 \
    -append "c-http netdev.ip=172.44.0.2/24:172.44.0.1::: -- " \
    -kernel workdir/build/c-http_qemu-arm64
```

You need use `sudo` or the `root` account to run QEMU with bridged networking.

### Run on Firecracker/x86_64

To set up networking, use the commands below:

```console
# Remove previously created network interfaces. Ignore missing device errors.
sudo ip link set dev virbr0 down
sudo ip link del dev virbr0
sudo ip link set dev tap0 down
sudo ip link del dev tap0
# Create tap interface for Firecracker networking.
sudo ip tuntap add dev tap0 mode tap
sudo ip address add 172.44.0.1/24 dev tap0
sudo ip link set dev tap0 up
```

Now run the Unikraft image:

```console
rm -f firecracker.socket
firecracker-x86_64 --config-file fc.x86_64.json --api-sock firecracker.socket
```

The user running the above command must be able to use KVM.
Typically this means being part of the `kvm` group.
Otherwise, run the command above as root or prefixed by `sudo`.

### Run on Firecracker/ARM64

To set up networking, use the commands below:

```console
# Remove previously created network interfaces. Ignore missing device errors.
sudo ip link set dev virbr0 down
sudo ip link del dev virbr0
sudo ip link set dev tap0 down
sudo ip link del dev tap0
# Create tap interface for Firecracker networking.
sudo ip tuntap add dev tap0 mode tap
sudo ip address add 172.44.0.1/24 dev tap0
sudo ip link set dev tap0 up
```

Now run the Unikraft image:

```console
rm -f firecracker.socket
firecracker-aarch64 --config-file fc.arm64.json --api-sock firecracker.socket
```

The user running the above command must be able to use KVM.
Typically this means being part of the `kvm` group.
Otherwise, run the command above as the `root` account or prefixed by `sudo`.

### Run on Xen/x86_64

To set up networking, use the commands below:

```console
# Remove previously created network interfaces. Ignore missing device errors.
sudo ip link set dev virbr0 down
sudo ip link del dev virbr0
sudo ip link set dev tap0 down
sudo ip link del dev tap0
# Create bridge interface for Xen networking.
sudo ip link add dev virbr0 type bridge
sudo ip address add 172.44.0.1/24 dev virbr0
sudo ip link set dev virbr0 up
```

Now run the Unikraft image:

```console
sudo xl create -c xen.x86_64.cfg
```

You need use `sudo` or the `root` account to run Xen.

### Run on Xen/ARM64

To set up networking, use the commands below:

```console
# Remove previously created network interfaces. Ignore missing device errors.
sudo ip link set dev virbr0 down
sudo ip link del dev virbr0
sudo ip link set dev tap0 down
sudo ip link del dev tap0
# Create bridge interface for Xen networking.
sudo ip link add dev virbr0 type bridge
sudo ip address add 172.44.0.1/24 dev virbr0
sudo ip link set dev virbr0 up
```

Now run the Unikraft image:

```console
sudo xl create -c xen.arm64.cfg
```

You need use `sudo` or the `root` account to run Xen.

## Test

To test C HTTP on Unikraft, use `curl` (or any other HTTP client):

```console
curl 172.44.0.2:8080
```

In case of a successful run, a Hello message is printed:

```console
Hello from Unikraft!
```

## Close

As a server, C HTTP will run forever until you close the Unikraft virtual machine that runs it.
Closing the virtual machine depends on the platform.

### Close QEMU

To close the QEMU virtual machine, use the `Ctrl+a x` keyboard shortcut;
that is press the `Ctrl` and `a` keys at the same time and then, separately, press the `x` key.

### Close Firecracker

To close the Firecracker virtual machine, open another console and use the command:

```console
sudo pkill -f firecracker
```

### Close Xen

To close the Xen virtual machine, open another console and use the command:

```console
sudo xl destroy c-http
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

## Customize

C HTTP is the simplest networking application to be run with Unikraft.
This makes it ideal as a minimal testing ground for new features: it builds fast, it only has LWIP as a dependency.

### Update the Unikraft Core Code

If updating the Unikraft core code in the `./workdir/unikraft/` directory, you then go through the [configure](#configure), [build](#build) and [run](#run) steps.

### Add Other Source Code Files

The current configuration use a single source file: `server.c`.
If looking to add another file to the build, update the [`Makefile.uk`](Makefile.uk) file.

For example, to add a new file `support.c` to the build, update the [`Makefile.uk`](Makefile.uk) file to:

```make
$(eval $(call addlib,appchttp))

APPCHTTP_SRCS-y += $(APPCHTTP_BASE)/server.c
APPCHTTP_SRCS-y += $(APPCHTTP_BASE)/support.c
```

To add a new include directory, such as a local `include/` directory, update the [`Makefile.uk`](Makefile.uk) file to:

```make
$(eval $(call addlib,appchttp))

APPCHTTP_SRCS-y += $(APPCHTTP_BASE)/server.c
CINCLUDES-y += -I$(APPCHTTP_BASE)/include
```

Then go through the [configure](#configure), [build](#build) and [run](#run) steps.

### Add Other Libraries

It may be the case that you want to add another library to the build, in order to test the library or a certain feature.
If that is the case, update the `UK_LIBS` variable in the [`Makefile`](Makefile).

For example, to add the Musl library to the build, you need to add the [corresponding `lib-musl` repository](https://github.com/unikraft/lib-musl) to `workdir/`.
You can add a symbolic link to the `../repos/libs/musl` repository:

```console
test -d workdir/libs || mkdir workdir/libs
ln -sfn ../../../repos/libs/musl workdir/libs/musl
```

Then update the `UK_LIBS` line in the [`Makefile`](Makefile) to:

```make
UK_LIBS ?= $(LIBS_BASE)/musl
```

Then go through the [configure](#configure), [build](#build) and [run](#run) steps.
