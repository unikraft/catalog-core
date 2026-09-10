#!/bin/sh
# GitHub runners set the iptables FORWARD chain to DROP, which breaks dnsmasq
# forwarding to upstream resolvers . The run scripts
# add a POSTROUTING MASQUERADE; punch a hole for the bridge subnet too. The
# caller invokes this only on GitHub runners.
for dir in -s -d; do
    sudo iptables -C FORWARD $dir 172.44.0.0/24 -j ACCEPT 2>/dev/null \
        || sudo iptables -I FORWARD $dir 172.44.0.0/24 -j ACCEPT
done
