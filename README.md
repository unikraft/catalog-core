# Catalog Core

This is a catalog of applications that are set up, configured, built and run using first principles tools: Make, GCC, Clang, Kconfig, QEMU, Firecracker, Xen.
Each directory belongs to a given application and it typically consists of source code, `Makefile`, `Makefile.uk`, filesystem and a `README.md` file with instructions.

This catalog is targeted towards core developers (i.e. developers of [`unikraft` core repository](https://github.com/unikraft/unikraft) or [library repositories](https://github.com/search?q=topic%3Alibrary+org%3Aunikraft&type=Repositories)), maintainers, testers and those who want to learn about the [internals of Unikraft](https://unikraft.org/docs/internals).
Application and tooling developers and general users should use the [official `catalog` repository](https://github.com/unikraft/catalog).

In order to use this catalog, clone this repository and enter the preferred application directory:

```console
git clone https://github.com/unikraft/catalog-core
cd catalog-core/<application-directory>
```

Inside the directory, follow the instructions in the application `README.md`.

Before and while you are using this catalog, read about the [internals of Unikraft](https://unikraft.org/docs/internals).

## Requirements

In order to set up, configure, build and run applications on Unikraft using first principles, the following packages are required:

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

GCC >= 8 is required to build Unikraft.

On Ubuntu/Debian or other `apt`-based distributions, use the following command to install the requirements:

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

### Clang

Unikraft supports Clang.
If you plan to use it, install the `clang` package.

On Ubuntu/Debian or other `apt`-based distributions, use the following command to install it:

```console
sudo apt install -y clang
```

Note that Clang >= 14 is required for building Unikraft.

### Firecracker

Unikraft support [Firecracker](https://firecracker-microvm.github.io/).
To install Firecracker, use the commands below in a downloads or packages directory that will store the package archive:

```console
release_url="https://github.com/firecracker-microvm/firecracker/releases"
latest=v1.7.0
curl -L ${release_url}/download/${latest}/firecracker-${latest}-${arch}.tgz | tar -xz
sudo cp release-${latest}-$(uname -m)/firecracker-${latest}-$(uname -m) /usr/local/bin/firecracker-${latest}-$(uname -m)
sudo ln -sfn /usr/local/bin/firecracker-${latest}-$(uname -m) /usr/local/bin/firecracker-$(uname -m)
```

Note that Firecracker requires KVM support.
The system must have KVM enabled and the user must be able to use KVM.
Typically, that means the user needs to be part of the `kvm` group.
This can be done using:

```
sudo usermod -a -G kvm $USER
```

It may be that you are required to log out and log back in, for the change to take effect.

### Xen

Unikraft supports Xen.
If you plan to run the application on Xen, you need a system with Xen installed.
Then install the Xen toolstack.

On Ubuntu/Debian or other `apt`-based distributions, use the following command to install the Xen toolstack:

```console
sudo apt install -y xen-utils
```
