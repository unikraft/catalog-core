#!/usr/bin/env bash

./setup.sh
cd $1
git fetch -fu "https://github.com/$2" "refs/pull/$3/head:pr-branch"
git checkout pr-branch
cd -
