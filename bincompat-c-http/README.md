# Linux Binary-Compatible C HTTP server on Unikraft

Build and run a simple C HTTP server compiled as a Linux ELF using the [Unikraft binary-compatibility layer](https://unikraft.org/docs/concepts/compatibility).
This application makes use of `elfloader-net` as its base, make sure to check its [README](../elfloader-net/README.md) for more information.
Follow the instructions below to set up, configure, build, and run an HTTP server.
Make sure you installed the [requirements](../README.md#requirements).

At this time, this application is only compatible with QEMU and Firecracker on the x86_64 platform.

## Quick Setup (aka TLDR)

For a quick setup, run the commands below.
Note that you still need to install the [requirements](../README.md#requirements).
Before everything, make sure you run the [top-level `setup.sh` script](../setup.sh).

To build and run the HTTP server Linux ELF using the Unikraft ELF Loader, first you will have to follow the [instructions](../elfloader-net/README.md#set-up) for configuring and building `elfloader-net` - follow those instructions within the `../elfloader-net/` directory normally.
After that, you can use the commands below:

```console
./setup.sh
sudo ip link set dev virbr0 down
sudo ip link del dev virbr0
sudo ip link add dev virbr0 type bridge
sudo ip address add 172.44.0.1/24 dev virbr0
sudo ip link set dev virbr0 up
test -f initrd.cpio || ./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
make -C rootfs/ clean all
./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
sudo qemu-system-x86_64 \
    -nographic \
    -m 64 \
    -cpu max \
    -netdev bridge,id=en0,br=virbr0 -device virtio-net-pci,netdev=en0 \
    -append "elfloader_qemu-x86_64 netdev.ip=172.44.0.2/24:172.44.0.1::: vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- /http_server" \
    -kernel "../elfloader-net/workdir/build/elfloader_qemu-x86_64" \
    -initrd ./initrd.cpio
```

This will run the Unikraft ELF Loader with an HTTP server Linux ELF.
To close the virtual machine, see the instructions in the ["Close QEMU" section](#close-qemu).

If you are experimenting with your own code or you encounter a bug which prevents the virtual machine from stopping, see the instructions in the ["Forcefully Terminating a Machine" section](#forcefully-terminating-a-machine).

Information about every step and about other types of builds is detailed below.

## Prepare the Linux ELF

The source for the ELF application resides in `rootfs/http_server.c`.

Whenever the code is changed, the `make` command below should be executed, after which the root filesystem may be rebuilt to reflect the changes (see [below](#build-the-filesystem)).

Build the Linux ELF to be used by the ELF Loader using:

```console
make -C rootfs/ clean all
```

The resulting ELF will be packed in an initial ramdisk CPIO file and will be passed to the ELF Loader at runtime.

## Set Up

Set up the required repositories.
For this, you have two options:

1. Use the `setup.sh` script:

   ```console
   ./setup.sh
   ```

   It will create symbolic links to the required repositories in `../repos/`.
   Be sure to run the [top-level `setup.sh` script](../setup.sh).

   If you want to use a custom variant of repositories (e.g. apply your own patch, make modifications), update it accordingly in the `../repos/` directory.

1. Have your custom setup of repositories in the `workdir/` directory.
   Clone, update and customize repositories to your own needs.

## Clean

While not required, you can clean the previous build artifacts:

```console
make -C rootfs/ clean
```

## Build the Filesystem

The filesystem is to be packed into `initrd.cpio`, an initial ramdisk CPIO file.
Use the command below for that:

```console
make -C rootfs/ all
rm -f initrd.cpio
./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
```

## Run

Run the resulting image using the corresponding platform tool.
Firecracker requires KVM support.

A successful run will show a message such as the one below:

```text
Set IPv4 address 172.44.0.2 mask 255.255.255.0 gw 172.44.0.1
en1: Added
en1: Interface is up
Powered by
o.   .o       _ _               __ _
Oo   Oo  ___ (_) | __ __  __ _ ' _) :_
oO   oO ' _ `| | |/ /  _)' _` | |_|  _)
oOo oOO| | | | |   (| | | (_) |  _) :_
 OoOoO ._, ._:_:_,\_._,  .__,_:_, \___)
                 Ijiraq 0.21.0~4de07be2
Listening on port 8080...
```

This means that the ELF Loader loaded and ran successfully the `http_server` binary in `rootfs/`, and it's actively waiting for connections.

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
    -m 64 \
    -cpu max \
    -netdev bridge,id=en0,br=virbr0 -device virtio-net-pci,netdev=en0 \
    -append "elfloader_qemu-x86_64 netdev.ip=172.44.0.2/24:172.44.0.1::: vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- /http_server" \
    -kernel "../elfloader-net/workdir/build/elfloader_qemu-x86_64" \
    -initrd ./initrd.cpio
```

### Run on Firecracker/x86_64

Note that you must build the `elfloader-net` Firecracker kernel before this step.

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

### Forcefully Terminating a Machine

To close the QEMU virtual machine, use the `Ctrl+a x` keyboard shortcut;
that is press the `Ctrl` and `a` keys at the same time and then, separately, press the `x` key.

To close the Firecracker virtual machine, open another console and use the command:

```console
sudo pkill -f firecracker
```

## Close

As a server, the application will run forever until you close the Unikraft virtual machine that runs it.
Closing the virtual machine depends on the platform.

### Close QEMU

To close the QEMU virtual machine, use the `Ctrl+a x` keyboard shortcut;
that is press the `Ctrl` and `a` keys at the same time and then, separately, press the `x` key.

### Close Firecracker

To close the Firecracker virtual machine, open another console and use the command:

```console
sudo pkill -f firecracker
```

## Clean Up

Doing a new configuration may require cleaning up the application contents in the root filesystem.

In order to clean up the application contents, use:

```console
make -C rootfs/ clean
```

You can also clean up the kernel in the `../elfloader-net/` directory.

## Customize

The program provided is a simple demonstration of a statically-linked executable, which means it doesn't require anything but the ELF itself to run correctly within the Unikraft kernel.

It's important to note that the executable must be compiled as a PIE (_Position Independent Executable_).

Both of these details are captured by the `-static-pie` flag inside `rootfs/Makefile`.

### Dynamic Linking

Besides statically-linked binaries, the `elfloader` layer also supports dynamically-linked executables.

In order to set this up, the dynamic libraries (also called shared objects on Linux) have to be placed in the appropriate locations within the root filesystem (including the dynamic linker / loader, e.g. `/lib64/ld-linux-x86-64.so.2`).

For more details and further instructions, check out [this document](https://github.com/unikraft/app-elfloader/blob/3bb91cc6f4305f9fb75f137ca86c5c8ca7abdd41/README.md#executing-elf-binaries).
