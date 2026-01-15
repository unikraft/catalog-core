#!/usr/bin/env bash
#
# Parses the repository payload from the input argument and sets GitHub step outputs.
# Usage: bash parse-repo.sh "<owner>/<repo>"
#

REPO_PAYLOAD="$1"
owner=$(echo "$REPO_PAYLOAD" | cut -d'/' -f1)
repo=$(echo "$REPO_PAYLOAD" | cut -d'/' -f2)

echo "owner=$owner" >> "$GITHUB_OUTPUT"
echo "repo=$repo" >> "$GITHUB_OUTPUT"
