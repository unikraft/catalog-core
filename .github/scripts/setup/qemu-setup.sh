#!/usr/bin/env bash

test -d /etc/qemu || sudo mkdir -p /etc/qemu
echo "allow all" | sudo tee /etc/qemu/bridge.conf
