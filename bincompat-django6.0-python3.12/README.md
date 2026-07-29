# Django 6.0 on Unikraft

Build and run the Django 6.0 web application with the ELF Loader. The ELF Loader uses the Unikraft binary-compatibility layer in order to run native Linux binaries (ELFs) with Unikraft. The ELF has to be PIE (Position-Independent Executable), either static or dynamic.  

Follow the instructions below to set up, configure, build and run the ELF Loader for Django.

## Quick Setup (aka TLDR)

For a quick setup, run the commands below.
Before everything, make sure you run the command `../setup.sh` from the catalog-core repository.

To extract, build and run Django using the Unikraft ELF Loader, use the commands below:

```console
./setup.sh
rm -rf rootfs-out rootfs.tar
docker build -t unikraft-django-fs rootfs/
docker container create --name unikraft-django-container unikraft-django-fs sh
docker export unikraft-django-container -o rootfs.tar
mkdir -p rootfs-out
tar xvf rootfs.tar -C rootfs-out/
test -f initrd.cpio || ./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs-out/
make distclean
make menuconfig
make -j $(nproc)
qemu-system-x86_64 \
	-nographic \
	-m 256 \
	-netdev user,id=net0,hostfwd=tcp::8080-:8080 \
	-device virtio-net-pci,netdev=net0 \
	-kernel workdir/build/elfloader_qemu-x86_64 \
	-initrd ./initrd.cpio \
	-append "netdev.ip=172.44.0.2/24:172.44.0.1::: -- /usr/local/bin/python3 /app/server.py"
```

This will configure, build and run the Unikraft ELF Loader with Django.

## Prepare the Linux ELF

Extract the rootfs and build the filesystem to be used by the ELF Loader using:

```console
rm -rf rootfs-out rootfs.tar
docker build -t unikraft-django-fs rootfs/
docker container create --name unikraft-django-container unikraft-django-fs sh
docker export unikraft-django-container -o rootfs.tar
mkdir -p rootfs-out
tar xvf rootfs.tar -C rootfs-out/
test -f initrd.cpio || ./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs-out/
```

## Set Up

Set up the required repositories by running the `setup.sh` script from the catalog-core repository.

## Clean

To clean the previous build artifacts:

```console
make distclean
```

## Configure

To configure the kernel, use:

```console
make menuconfig
```

In the console menu interface choose the platform (KVM/QEMU).

## Build

Build the application for the current configuration:

```console

make -j $(nproc)
```

This results in the creation of the `workdir/build/` directory storing the build artifacts.

## Run

Run the resulting image using QEMU:

```console
qemu-system-x86_64 \
	-nographic \
	-m 256 \
	-netdev user,id=net0,hostfwd=tcp::8080-:8080 \
	-device virtio-net-pci,netdev=net0 \
	-kernel workdir/build/elfloader_qemu-x86_64 \
	-initrd ./initrd.cpio \
	-append "netdev.ip=172.44.0.2/24:172.44.0.1::: -- /usr/local/bin/python3 /app/server.py"
```

Access the Django application at http://localhost:8080

## Close QEMU

To close the QEMU virtual machine, use the Ctrl+a x keyboard shortcut.
