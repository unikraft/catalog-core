#!/bin/sh

to_test="c-fs c-hello c-http cpp-hello cpp-http elfloader-basic elfloader-net nginx python3-hello"

if test $# -eq 1; then
    to_test="$1"
fi

./setup.sh

for d in $to_test; do
    echo "[$d]"
    echo ""
    cd "$d"
    ./scripts/test/all.sh
    cd ..
    echo ""
done
