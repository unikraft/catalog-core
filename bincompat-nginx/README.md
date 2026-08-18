# Linux Binary-Compatible NGINX on Unikraft

Build and run NGINX compiled as a Linux ELF using the [Unikraft binary-compatibility layer](https://unikraft.org/docs/concepts/compatibility).
This application makes use of `elfloader-net` as its base, make sure to check its [README](../elfloader-net/README.md) for more information.
Follow the instructions below to set up, configure, build, and run NGINX.
Make sure you installed the [requirements](../README.md#requirements).

At this time, this application is only compatible with QEMU on the x86_64 platform.

## Quick Setup (aka TLDR)

For a quick setup, run the commands below.
Note that you still need to install the [requirements](../README.md#requirements).

To run the NGINX Linux ELF using the Unikraft ELF Loader, first you will have to follow the [instructions](../elfloader-net/README.md#set-up) for configuring and building `elfloader-net` - follow those instructions within the `../elfloader-net` directory normally.

After that, you can use the commands below to extract the root filesystem using Docker and pack it:

```console
make -C rootfs/ clean all
../elfloader-net/workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/extracted_rootfs/
qemu-system-x86_64 \
    -nographic \
    -m 128 \
    -cpu max \
    -netdev bridge,id=en0,br=virbr0 -device virtio-net-pci,netdev=en0 \
    -append "elfloader_qemu-x86_64 vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] netdev.ip=172.44.0.2/24:172.44.0.1 -- /usr/sbin/nginx" \
    -kernel "../elfloader-net/workdir/build/elfloader_qemu-x86_64" \
    -initrd ./initrd.cpio

```

After the kernel boots, you should be able to access the NGINX default page at `http://172.44.0.2`.

If you are experimenting and you encounter a bug which prevents the virtual machine from stopping, see the instructions in the ["Forcefully Terminating a Machine" section](https://www.google.com/search?q=%23forcefully-terminating-a-machine).

Information about every step is detailed below.

## Prepare the Root Filesystem

The root filesystem for NGINX is built and extracted automatically using Docker.

Whenever you want to rebuild the root filesystem, the `make` command below should be executed:

```console
make -C rootfs/ clean all

```

This will build the Docker container and extract the required binaries and libraries into `./rootfs/extracted_rootfs`.

## Build the Ramdisk

The filesystem is to be packed into `initrd.cpio`, an initial ramdisk CPIO file.
Use the command below for that:

```console
rm -f initrd.cpio
../elfloader-net/workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/extracted_rootfs/

```

## Run

Run the resulting image using QEMU. Ensure you have set up a bridge interface (`virbr0`) before running this command, as NGINX requires network access.

### Run on QEMU/x86_64

```console
qemu-system-x86_64 \
    -nographic \
    -m 128 \
    -cpu max \
    -netdev bridge,id=en0,br=virbr0 -device virtio-net-pci,netdev=en0 \
    -append "elfloader_qemu-x86_64 vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] netdev.ip=172.44.0.2/24:172.44.0.1 -- /usr/sbin/nginx" \
    -kernel "../elfloader-net/workdir/build/elfloader_qemu-x86_64" \
    -initrd ./initrd.cpio

```

### Forcefully Terminating a Machine

To close the QEMU virtual machine, use the `Ctrl+a x` keyboard shortcut;
