# Linux Binary-Compatible Memcached on Unikraft

Build and run [Memcached](https://memcached.org/) 1.6 as a Linux ELF using the [Unikraft binary-compatibility layer](https://unikraft.org/docs/concepts/compatibility).
This application makes use of `elfloader-net` as its base, make sure to check its [README](../elfloader-net/README.md) for more information.
Follow the instructions below to set up, configure, build, and run Memcached.
Make sure you installed the [requirements](../README.md#requirements).
Memcached itself is not required on the host: the binary comes from the official Docker image, so [Docker](https://docs.docker.com/engine/install/) is needed instead.
The examples and the test scripts below use `nc`, from the `netcat-openbsd` package:

```console
sudo apt install netcat-openbsd
```

At this time, this application is only compatible with QEMU and Firecracker on the x86_64 platform.

## Quick Setup (aka TLDR)

For a quick setup, run the commands below.
Note that you still need to install the [requirements](../README.md#requirements).
Before everything, make sure you run the [top-level `setup.sh` script](../setup.sh).

```console
./setup.sh
./scripts/build/qemu.x86_64
./scripts/run/qemu.x86_64
```

This will boot the Unikraft ELF Loader and start Memcached, listening on `172.44.0.2:11211`.
From another terminal, talk to it using the Memcached text protocol:

```console
printf 'set mykey 0 0 5\r\nhello\r\nget mykey\r\nquit\r\n' | nc 172.44.0.2 11211
```

You should see:

```text
STORED
VALUE mykey 0 5
hello
END
```

## Prepare the Linux ELF

Memcached is not built from source.
The `rootfs/Dockerfile` (the one from the [`examples/memcached1.6-base/` directory in the `unikraft/catalog` repository](https://github.com/unikraft/catalog/tree/main/examples/memcached1.6-base)) collects the Memcached binary (`/usr/bin/memcached`), its dynamic libraries, the dynamic loader and the required configuration files (such as `/etc/passwd`, used by Memcached to look up the user passed with `-u`).
The `rootfs/Makefile` builds the Docker image and extracts the root filesystem into `rootfs/extracted_rootfs/`.
[Docker](https://docs.docker.com/engine/install/) is required for this step.

```console
make -C rootfs/ clean all
```

The resulting files are packed in an initial ramdisk CPIO file and passed to the ELF Loader at runtime.

## Set Up

Set up the required repositories.
For this, you have two options:

1. Use the `setup.sh` script:

   ```console
   ./setup.sh
   ```

   It will create symbolic links to the required repositories in `../repos/`.
   Be sure to run the [top-level `setup.sh` script](../setup.sh).

1. Have your custom setup of repositories in the `workdir/` directory.

## Build the Filesystem

The filesystem is to be packed into `initrd.cpio`, an initial ramdisk CPIO file:

```console
rm -f initrd.cpio
./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/extracted_rootfs/
```

Or use the script, which also rebuilds the root filesystem:

```console
./scripts/build/rootfs.x86_64
```

## Run

A successful run shows the Unikraft banner and then keeps running, with Memcached listening on `172.44.0.2:11211`:

```text
Powered by
o.   .o       _ _               __ _
Oo   Oo  ___ (_) | __ __  __ _ ' _) :_
oO   oO ' _ `| | |/ /  _)' _` | |_|  _)
oOo oOO| | | | |   (| | | (_) |  _) :_
 OoOoO ._, ._:_:_,\_._,  .__,_:_, \___)
                 Ijiraq 0.21.0~be744898
[    0.135501] ERR:  [libposix_process] <deprecated.c @  337> Ignore updating resource 7: cur = 1024, max = 1024
```

The `Ignore updating resource 7` error is harmless: Memcached asks to raise its file descriptor limit and Unikraft keeps the fixed default.
Memcached prints nothing else by default; use `stats` over the network to inspect it:

```console
printf 'stats\r\nquit\r\n' | nc 172.44.0.2 11211
```

### Run on QEMU/x86_64

```console
./scripts/run/qemu.x86_64
```

The script also creates the `virbr0` bridge interface (`172.44.0.1/24`) used by the virtual machine.

### Run on Firecracker/x86_64

Note that you must build the Firecracker kernel before this step:

```console
./scripts/build/fc.x86_64
./scripts/run/fc.x86_64
```

The script creates the `tap0` interface used by Firecracker.
The user running the above command must be able to use KVM.
Typically this means being part of the `kvm` group.
Otherwise, run the command above as root or prefixed by `sudo`.

Note that building the QEMU kernel and the Firecracker kernel are mutually exclusive: each build removes the other one, so rebuild the kernel when you switch platforms.

### Forcefully Terminating a Machine

To close the QEMU virtual machine, use the `Ctrl+a x` keyboard shortcut;
that is press the `Ctrl` and `a` keys at the same time and then, separately, press the `x` key.

To close the Firecracker virtual machine, open another console and use the command:

```console
sudo pkill -f firecracker
```

## Test

Run the automated tests, which build the application, boot the virtual machine, store a value and read it back:

```console
./scripts/test/all.sh
```

Each build and run prints `PASSED` or `FAILED`.
Logs are stored in the `./scripts/test/log/` directory.
Note that `run.fc.x86_64` requires KVM, so it fails on hosts without `/dev/kvm`.
