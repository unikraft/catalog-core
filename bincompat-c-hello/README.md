# Linux Binary-Compatible C Hello on Unikraft

Build and run a C Hello program compiled as a Linux ELF using the [Unikraft binary-compatibility layer](https://unikraft.org/docs/concepts/compatibility).
This application makes use of `elfloader-basic` as its base, make sure to check its [README](../elfloader-basic/README.md) for more information.
Follow the instructions below to set up, configure, build, and run C Hello.
Make sure you installed the [requirements](../README.md#requirements).

At this time, this application is only compatible with QEMU and Firecracker on the x86_64 platform.

## Quick Setup (aka TLDR)

For a quick setup, run the commands below.
Note that you still need to install the [requirements](../README.md#requirements).
Before everything, make sure you run the [top-level `setup.sh` script](../setup.sh).

To build and run the Hello Linux ELF using the Unikraft ELF Loader, first you will have to follow the [instructions](../elfloader-basic/README.md#set-up) for configuring and building `elfloader-basic` - follow those instructions within the `../elfloader-basic` directory normally.
After that, you can use the commands below:

```console
./setup.sh
make -C rootfs/ clean all
./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
qemu-system-x86_64 \
    -nographic \
    -m 64 \
    -cpu max \
    -append "elfloader_qemu-x86_64 vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- /hello-c" \
    -kernel "../elfloader-basic/workdir/build/elfloader_qemu-x86_64" \
    -initrd ./initrd.cpio
```

This will run the Unikraft ELF Loader with a Hello Linux ELF.
After the message is printed to the console, the machine should automatically terminate.

If you are experimenting with your own code or you encounter a bug which prevents the virtual machine from stopping, see the instructions in the ["Forcefully Terminating a Machine" section](#forcefully-terminating-a-machine).

Information about every step and about other types of builds is detailed below.

## Prepare the Linux ELF

The source for the ELF application resides in `rootfs/hello.c`.

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

   If you want use a custom variant of repositories (e.g. apply your own patch, make modifications), update it accordingly in the `../repos/` directory.

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
rm -f initrd.cpio
./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
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
                    Pan 0.19.0~e4d07100
Hello from Unikraft!
```

This means that the ELF Loader loaded and ran successfully the `hello-c` binary in `rootfs/`.

### Run on QEMU/x86_64

```console
qemu-system-x86_64 \
    -nographic \
    -m 64 \
    -cpu max \
    -append "elfloader_qemu-x86_64 vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- /hello-c" \
    -kernel "../elfloader-basic/workdir/build/elfloader_qemu-x86_64" \
    -initrd ./initrd.cpio
```

### Run on Firecracker/x86_64

Note that you must build the `elfloader-basic` Firecracker kernel before this step.

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

## Customize

The program provided is a simple demonstration of a statically-linked executable, which means it doesn't require anything but the ELF itself to run correctly within the Unikraft kernel.

It's important to note that the executable must be compiled as a PIE (_Position Independent Executable_).

Both of these details are captured by the `-static-pie` flag inside `rootfs/Makefile`.

### Dynamic Linking

Besides statically-linked binaries, the `elfloader` layer also supports dynamically-linked executables.

In order to set this up, the dynamic libraries (also called shared objects on Linux) have to be placed in the appropriate locations within the root filesystem (including the dynamic linker / loader, e.g. `/lib64/ld-linux-x86-64.so.2`).

For more details and further instructions, check out [this document](https://github.com/unikraft/app-elfloader/blob/3bb91cc6f4305f9fb75f137ca86c5c8ca7abdd41/README.md#executing-elf-binaries).
