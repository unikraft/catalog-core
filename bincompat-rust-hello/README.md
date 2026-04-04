# Linux Binary-Compatible Rust Hello on Unikraft

Build and run a Rust Hello program compiled as a Linux ELF using the [Unikraft binary-compatibility layer](https://unikraft.org/docs/concepts/compatibility).
This application makes use of `elfloader-basic` as its base, make sure to check its [README](../elfloader-basic/README.md) for more information.
Follow the instructions below to set up, configure, build, and run Rust Hello.
Make sure you installed the [requirements](../README.md#requirements).

## Quick Setup (aka TLDR)

For a quick setup, run the commands below.
Note that you still need to install the [requirements](../README.md#requirements).
Before everything, make sure you run the [top-level `setup.sh` script](../setup.sh).

To build and run the Hello Linux ELF using the Unikraft ELF Loader, first you will have to follow the [instructions](../elfloader-basic/README.md#set-up) for configuring and building `elfloader-basic` - follow those instructions within the `../elfloader-basic` directory normally.
After that, you can use the commands below:

```console
./setup.sh
mkdir rootfs
docker build -t unikraft-rust-fs .
docker container create --name unikraft-rust-container unikraft-rust-fs sh
docker export unikraft-rust-container -o rootfs.tar
tar xvf rootfs.tar -C rootfs/
test -f initrd.cpio || ./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
qemu-system-x86_64 \
    -nographic \
    -m 2048 \
    -cpu max \
    -append "elfloader_qemu-x86_64 vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- /helloworld" \
    -kernel "../elfloader-basic/workdir/build/elfloader_qemu-x86_64" \
    -initrd ./initrd.cpio
```

This will run the Unikraft ELF Loader with a Hello Linux ELF.
After the message is printed to the console, the machine should automatically terminate.

If you are experimenting with your own code or you encounter a bug which prevents the virtual machine from stopping, see the instructions in the ["Forcefully Terminating a Machine" section](#forcefully-terminating-a-machine).

Information about every step and about other types of builds is detailed below.

## Prepare the Linux ELF

The source for the ELF application resides in `helloworld.rs`.

Whenever the code is changed, the `make` command below should be executed, after which the root filesystem needs to be rebuilt.

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

## Build the Filesystem

Use the command below for that:

```console
docker build -t unikraft-rust-fs .
docker container create --name unikraft-rust-container unikraft-rust-fs sh
docker export unikraft-rust-container -o rootfs.tar
tar xvf rootfs.tar -C rootfs/
test -f initrd.cpio || ./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
```

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
                 Kiviuq 0.20.0~a0399f3f
Hello, Unikraft from Rust!
```

This means that the ELF Loader loaded and ran successfully the `helloworld` binary in `rootfs/`.

### Run on QEMU/x86_64

```console
qemu-system-x86_64 \
    -nographic \
    -m 2048 \
    -cpu max \
    -append "elfloader_qemu-x86_64 vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- /helloworld" \
    -kernel "../elfloader-basic/workdir/build/elfloader_qemu-x86_64" \
    -initrd ./initrd.cpio
```

### Forcefully Terminating a Machine

To close the QEMU virtual machine, use the `Ctrl+a x` keyboard shortcut;
that is press the `Ctrl` and `a` keys at the same time and then, separately, press the `x` key.
