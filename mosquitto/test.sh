#!/bin/sh
# Publish a message to the broker, then read it back.
# Override the target with HOST/PORT. Exits non-zero on the first failure.
set -e

HOST="${HOST:-172.44.0.2}"
PORT="${PORT:-1883}"
TOPIC="test/unikraft"
MSG="Hello from Mosquitto on Unikraft!"

# -r retains the message, so the broker stores it and hands it to the next
# subscriber
timeout 10 mosquitto_pub -h "$HOST" -p "$PORT" -t "$TOPIC" -m "$MSG" -r

# -C 1 exits after the first message, -W 5 gives up after five seconds.
mosquitto_sub -h "$HOST" -p "$PORT" -t "$TOPIC" -C 1 -W 5 | grep -qx "$MSG"

# An empty retained message clears the stored one, so a re-run starts clean.
timeout 10 mosquitto_pub -h "$HOST" -p "$PORT" -t "$TOPIC" -n -r

echo "all checks passed"
