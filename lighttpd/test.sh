#!/bin/sh
# Checks for lighttpd unikernel. Used both manually and by the CI harness (.scripts/test/wrapper.sh).
# Exits non-zero on the first failed check. Override target with HOST/PORT.
# Set TLS=1 to also check HTTPS on TLS_PORT (needs the ssl block enabled in
# rootfs/lighttpd.conf and a CONFIG_LIBLIGHTTPD_OPENSSL=y build; x86_64 only).

set -e

HOST="${HOST:-172.44.0.2}"
PORT="${PORT:-80}"
TLS_PORT="${TLS_PORT:-443}"

c() { curl -s --connect-timeout 2 --max-time 10 "$@"; }

echo "HTTP: / returns index page"
c "http://$HOST:$PORT/" | grep -q "Hello from Unikraft!"

echo "HTTP: response headers say lighttpd"
c -I "http://$HOST:$PORT/" | grep -qi '^Server: lighttpd'

echo "HTTP: unknown path returns 404"
c -o /dev/null -w '%{http_code}' "http://$HOST:$PORT/catnip123" | grep -qx 404

echo "mod_status: /server-status reports server version"
c "http://$HOST:$PORT/server-status" | grep -q "lighttpd/"

echo "mod_expire: caching headers present"
c -I "http://$HOST:$PORT/" | grep -qE '^(Expires|Cache-Control)'

echo "mod_deflate (lib-zlib): gzip-encoded response"
c -D - -o /dev/null -H 'Accept-Encoding: gzip' "http://$HOST:$PORT/" | grep -qi '^Content-Encoding: gzip'

echo "mod_rewrite (lib-pcre): /rewritten serves the index"
c "http://$HOST:$PORT/rewritten" | grep -q "Hello from Unikraft!"

if test "${TLS:-0}" = "1"; then
    echo "HTTPS: / returns index page"
    c -k "https://$HOST:$TLS_PORT/" | grep -q "Hello from Unikraft!"
fi

echo "all checks passed"
