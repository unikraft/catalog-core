#!/usr/bin/env bash

release_url="https://github.com/firecracker-microvm/firecracker/releases"
latest=v1.7.0
curl -L ${release_url}/download/${latest}/firecracker-${latest}-$(uname -m).tgz | tar -xz
sudo cp release-${latest}-$(uname -m)/firecracker-${latest}-$(uname -m) /usr/local/bin/firecracker-${latest}-$(uname -m)
sudo ln -sfn /usr/local/bin/firecracker-${latest}-$(uname -m) /usr/local/bin/firecracker-$(uname -m)
sudo usermod -a -G kvm $USER
