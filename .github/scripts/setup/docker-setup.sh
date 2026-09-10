#!/usr/bin/env bash

set -e

# Enable Docker BuildKit
echo "DOCKER_BUILDKIT=1" >> $GITHUB_ENV
