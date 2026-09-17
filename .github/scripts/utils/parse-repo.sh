#!/usr/bin/env bash

REPO_PAYLOAD="$1"
owner=$(echo "$REPO_PAYLOAD" | cut -d'/' -f1)
repo=$(echo "$REPO_PAYLOAD" | cut -d'/' -f2)

echo "owner=$owner" >> "$GITHUB_OUTPUT"
echo "repo=$repo" >> "$GITHUB_OUTPUT"
