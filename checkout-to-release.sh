#!/bin/bash

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

cd "$SCRIPT_DIR" || exit

if [ -z "$1" ]; then
    echo "Please provide a version argument."
    echo "Usage: $0 <version>"
    exit 1
fi

TAG="$1"
if [[ "$TAG" != RELEASE-* ]]; then
    TAG="RELEASE-${TAG}"
fi


if ! git -C "$SCRIPT_DIR/repos/unikraft" tag | grep "^${TAG}$"; then
    echo "Warning: '$TAG' is not in the known release list; attempting checkout anyway."
    echo "Known releases:"
    git -C "$SCRIPT_DIR/repos/unikraft" tag --sort=-creatordate
fi

for d in "$SCRIPT_DIR"/repos/libs/* "$SCRIPT_DIR"/repos/apps/* "$SCRIPT_DIR"/repos/unikraft; do
	if [ -d "$d" ]; then
        (
            cd "$d" || exit 1
            git fetch --tags --quiet
            
            # Check if tag exists locally or on remote
            if git rev-parse "$TAG" >/dev/null 2>&1; then
                git checkout "$TAG" --quiet
                echo "Checked out $TAG for $d"
            else
		MATCH_TAG=$( (git tag -l "RELEASE-*"; echo "$TAG") \
            		| sort -u -V \
            		| awk -v t="$TAG" '$0 == t { print prev; exit } { prev = $0 }' )
		if [ -z "$MATCH_TAG" ]; then
			MATCH_TAG=$(git tag --sort=-creatordate | head -n 1)
		fi
                if [ -n "$MATCH_TAG" ]; then
                    git checkout "$MATCH_TAG" --quiet
                    echo "Checked out fallback latest tag: $MATCH_TAG for $d"
                else
                    echo "No tags found in repository at $d. Skipping."
                fi
            fi
        )
    else
        echo "Directory $d does not exist. Run ./setup.sh first."
    fi
done
