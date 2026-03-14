# Mosquitto MQTT Broker on Unikraft

Build and run the Mosquitto MQTT broker on Unikraft.
Follow the instructions below to set up, configure, build and run Mosquitto.
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
wget -O /tmp/defconfig https://raw.githubusercontent.com/unikraft/catalog-core/refs/heads/scripts/mosquitto/scripts/defconfig/qemu.x86_64
UK_DEFCONFIG=/tmp/defconfig make defconfig
```

```console
make -j $(nproc)
sudo ip link set dev virbr0 down
sudo ip link del dev virbr0
sudo ip link add dev virbr0 type bridge
sudo ip address add 172.44.0.1/24 dev virbr0
sudo ip link set dev virbr0 up

# Create the initial ramdisk (initrd) containing the mosquitto config
rm -f initrd.cpio
cd rootfs && find . | cpio -o -H newc > ../initrd.cpio && cd ..

sudo qemu-system-x86_64 \
    -nographic \
    -m 16 \
    -cpu max \
    -netdev bridge,id=en0,br=virbr0 -device virtio-net-pci,netdev=en0 \
    -append "mosquitto netdev.ip=172.44.0.2/24:172.44.0.1::: vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] random.seed=12213123 -- -c /etc/mosquitto/mosquitto.conf" \
    -kernel workdir/build/mosquitto_qemu-x86_64 \
    -initrd ./initrd.cpio
```

This will configure, build and run Mosquitto on Unikraft.
You can see how to test it in the ["Test" section](#test).

## Set Up

Set up the required repositories.
For this, you have two options:

1. Use the `setup.sh` script:

   ```console
   ./setup.sh
   ```

   It will create symbolic links to the required repositories in `../repos/`.
   Be sure to run the [top-level `setup.sh` script](../setup.sh).

2. Have your custom setup of repositories in the `workdir/` directory.
   Clone, update and customize repositories to your own needs.

## Clean

While not strictly required, it is safest to clean the previous build artifacts:

```console
make distclean
```

## Configure

To configure the kernel, use:

```console
wget -O /tmp/defconfig https://raw.githubusercontent.com/unikraft/catalog-core/refs/heads/scripts/mosquitto/scripts/defconfig/qemu.x86_64
UK_DEFCONFIG=/tmp/defconfig make defconfig
```

If you wish to change the configuration further, you can use:

```console
make menuconfig
```

The end result will be the creation of the `.config` configuration file.

## Build

Build the application for the current configuration:

```console
make -j $(nproc)
```

This results in the creation of the `workdir/build/` directory storing the build artifacts.

### Build the Filesystem

The filesystem is to be packed into `initrd.cpio`, an initial ramdisk CPIO file.
Use the command below for that:

```console
cd rootfs && find . | cpio -o -H newc > ../initrd.cpio && cd ..
```

## Run

Run the resulting image using the corresponding platform tool.
Firecracker requires KVM support.
Xen requires a system with Xen installed.

A successful run will show a message such as the one below:

```text
Booting from ROM..[    0.000000] ERR:  [libukallocbbuddy] <bbuddy.c @  569> 11000: Failed to add memory rs
en1: Added
en1: Interface is up
Powered by
o.   .o       _ _               __ _
Oo   Oo  ___ (_) | __ __  __ _ ' _) :_
oO   oO ' _ `| | |/ /  _)' _` | |_|  _)
oOo oOO| | | | |   (| | | (_) |  _) :_
 OoOoO ._, ._:_:_,\_._,  .__,_:_, \___)
                 Kiviuq 0.20.0~f5090fa7
1773527810: Info: running mosquitto as user id: -38.
1773527810: mosquitto version 2.1.2 starting
1773527810: Config loaded from /etc/mosquitto/mosquitto.conf.
1773527810: Bridge support available.
1773527810: Persistence support available.
1773527810: TLS support NOT available.
1773527810: TLS-PSK support NOT available.
1773527810: Websockets support NOT available.
1773527810: Opening ipv6 listen socket on port 1883.
1773527810: Opening ipv4 listen socket on port 1883.
1773527810: mosquitto version 2.1.2 running
```

> [!NOTE]
> The error "ERR:  [libukallocbbuddy] <bbuddy.c @  569> 11000: Failed to add memory region" during boot is completely normal and harmless. It simply means  memory allocator tried to register a specific memory region from the  BIOS that was too small or overlapping, but it still successfully registers the main RAM directly afterwards.

### Run on QEMU/x86_64

To set up networking, use the commands below:

```console
sudo ip link set dev virbr0 down
sudo ip link del dev virbr0
sudo ip link add dev virbr0 type bridge
sudo ip address add 172.44.0.1/24 dev virbr0
sudo ip link set dev virbr0 up
```

Now run the Unikraft image:

```console
sudo qemu-system-x86_64 \
    -nographic \
    -m 16 \
    -cpu max \
    -netdev bridge,id=en0,br=virbr0 -device virtio-net-pci,netdev=en0 \
    -append "mosquitto netdev.ip=172.44.0.2/24:172.44.0.1::: vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] random.seed=12213123 -- -c /etc/mosquitto/mosquitto.conf" \
    -kernel workdir/build/mosquitto_qemu-x86_64 \
    -initrd ./initrd.cpio
```

### Run on Firecracker/x86_64

To set up networking, use the commands below:

```console
sudo ip link set dev virbr0 down
sudo ip link del dev virbr0
sudo ip link set dev tap0 down
sudo ip link del dev tap0
sudo ip tuntap add dev tap0 mode tap
sudo ip address add 172.44.0.1/24 dev tap0
sudo ip link set dev tap0 up
```

Now run the Unikraft image:

```console
rm -f firecracker.socket
sudo firecracker-x86_64 --config-file fc.x86_64.json --api-sock firecracker.socket
```

### Run on Xen/x86_64

To set up networking, use the commands below:

```console
sudo ip link set dev virbr0 down
sudo ip link del dev virbr0
sudo ip link set dev tap0 down
sudo ip link del dev tap0
sudo ip link add dev virbr0 type bridge
sudo ip address add 172.44.0.1/24 dev virbr0
sudo ip link set dev virbr0 up
```

Now run the Unikraft image:

```console
sudo xl create -c xen.x86_64.cfg
```

## Test

To test Mosquitto on Unikraft, open two terminals on your host machine.

In terminal 1 (subscribe):
```console
mosquitto_sub -h 172.44.0.2 -p 1883 -t "test/unikraft"
```

In terminal 2 (publish):
```console
mosquitto_pub -h 172.44.0.2 -p 1883 -t "test/unikraft" -m "Hello from Mosquitto on Unikraft!"
```

In terminal 1, you should see:
```text
Hello from Mosquitto on Unikraft!
```

## Clean Up

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
