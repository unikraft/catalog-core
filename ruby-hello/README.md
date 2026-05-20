# Ruby Hello on Unikraft

Build and run a Ruby Hello program as a Unikraft unikernel. Follow the instructions below to set up, configure, build, and run the application using the standard Makefile-based workflow.

## Set Up

Set up the required repositories by creating symbolic links to the central resource directory. Be sure to run the top-level setup.sh script first to populate the global repos/ directory.

## Shell

```console
./setup.sh
```

## Clean

While not strictly required, it is safest to clean the previous build artifacts before a new configuration:

```console
make distclean
```

## Configure

To configure the unikernel, use the standard menu interface:

```console
make menuconfig
```

In the menu, select the target architecture (e.g., x86_64) and the platform (e.g., KVM guest). Under Library Configuration, ensure ruby is selected and configure any necessary extensions.

## Build

Build the application for the current configuration:

```console
make -j $(nproc)
```

The resulting unikernel image will be created in the build/ directory as ruby-hello_kvm-x86_64.

## Run
To run the resulting image on Firecracker (x86_64), use the following command:

```console
rm -f firecracker.socket
firecracker-x86_64 --config-file fc.x86_64.json --api-sock firecracker.socket
```

A successful run will start the Ruby interpreter and execute the helloworld.rb script inside the unikernel.
