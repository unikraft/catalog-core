#!/usr/bin/env bash

set -e

sudo apt -y update
sudo apt install -y --no-install-recommends \
	build-essential \
	gcc-aarch64-linux-gnu \
	g++-aarch64-linux-gnu \
	libncurses-dev \
	libyaml-dev \
	flex \
	bison \
	git \
	wget \
	curl \
	uuid-runtime \
	qemu-kvm \
	qemu-system-x86 \
	qemu-system-arm \
	sgabios \
	libarchive-tools \
	clang \
	xen-utils \
	redis-tools
