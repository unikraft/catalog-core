#!/bin/sh
# DNS checks against a running dnsmasq unikernel. Used both manually (after
# ./.scripts/run/qemu.x86_64) and by the CI harness (.scripts/test/wrapper.sh).
# Exits non-zero on the first failed check. Override target with HOST/PORT.
set -e

HOST="${HOST:-172.44.0.2}"
PORT="${PORT:-53}"


q() { dig +short "$@" +timeout=5 +tries=3 @"$HOST" -p "$PORT"; }

echo "UDP: test.local -> 172.44.0.2"
q test.local | grep -qx 172.44.0.2

echo "TCP: test.local -> 172.44.0.2"
q +tcp test.local | grep -qx 172.44.0.2

echo "Forwarding: google.com resolves via upstream"
q google.com | grep -qE '^[0-9]'

echo "Forwarding: unikraft.org resolves via upstream"
q unikraft.org | grep -qE '^[0-9]'

echo "DNSSEC: cloudflare.com is validated ('ad' flag set)"
dig +timeout=5 +tries=3 @"$HOST" -p "$PORT" +dnssec cloudflare.com \
    | grep -E '^;; flags:' | grep -q ' ad'

echo "DNSSEC: dnssec-failed.org is rejected (SERVFAIL)"
dig +timeout=5 +tries=3 @"$HOST" -p "$PORT" dnssec-failed.org \
    | grep -q 'status: SERVFAIL'

echo "all checks passed"
