#!/usr/bin/env bash
#
# Posts a compact embed to Discord about this workflow run.
#
# Usage: discord-notify.sh <status: started|success|failure|cancelled> <details-text>
#
# Required env:   DISCORD_WEBHOOK_URL
# Optional env:   DISCORD_THREAD_ID  - post into a specific thread under the webhook's channel
#                 DISCORD_MENTION    - e.g. "<@123456789>" or "<@&ROLE_ID>", pinged only on failure
# GITHUB_* vars (repo, run id, workflow name, server url) are set by Actions automatically.

set -euo pipefail

STATUS="$1"
DETAILS="${2:-}"

if [ -z "${DISCORD_WEBHOOK_URL:-}" ]; then
  echo "DISCORD_WEBHOOK_URL not set -- skipping Discord notification."
  exit 0
fi

RUN_URL="${GITHUB_SERVER_URL:-https://github.com}/${GITHUB_REPOSITORY}/actions/runs/${GITHUB_RUN_ID}"

# Post into a thread by appending Discord's documented ?thread_id= param.
WEBHOOK_URL="$DISCORD_WEBHOOK_URL"
if [ -n "${DISCORD_THREAD_ID:-}" ]; then
  WEBHOOK_URL="${WEBHOOK_URL}?thread_id=${DISCORD_THREAD_ID}"
fi

case "$STATUS" in
  started)   COLOR=3447003;  TITLE="🚀 ${GITHUB_WORKFLOW} started" ;;
  success)   COLOR=3066993;  TITLE="✅ ${GITHUB_WORKFLOW} passed" ;;
  failure)   COLOR=15158332; TITLE="❌ ${GITHUB_WORKFLOW} failed" ;;
  cancelled) COLOR=9807270;  TITLE="⚪ ${GITHUB_WORKFLOW} cancelled" ;;
  *)         COLOR=9807270;  TITLE="${GITHUB_WORKFLOW}: ${STATUS}" ;;
esac

# A mention only actually pings when it's plain message "content", not
# inside an embed -- so it's kept as a separate field, and only set on
# failure so passes/starts stay quiet.
CONTENT=""
if [ "$STATUS" = "failure" ] && [ -n "${DISCORD_MENTION:-}" ]; then
  CONTENT="$DISCORD_MENTION"
fi

# Discord embed description has a 4096 char cap; keep it well under that.
DETAILS_TRUNCATED=$(printf '%s' "$DETAILS" | cut -c1-1500)

payload=$(jq -n \
  --arg content "$CONTENT" \
  --arg title "$TITLE" \
  --arg desc "$DETAILS_TRUNCATED" \
  --arg url "$RUN_URL" \
  --argjson color "$COLOR" \
  '{
    content: $content,
    embeds: [{
      title: $title,
      description: $desc,
      url: $url,
      color: $color
    }]
  }')

curl -sS -X POST -H "Content-Type: application/json" \
  -d "$payload" \
  "$WEBHOOK_URL" \
  --fail-with-body \
  || echo "::warning::Discord notification failed to send (non-fatal)."
