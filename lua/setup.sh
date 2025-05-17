#!/bin/sh

check_exists_and_create_symlink()
{
    path="$1"

    if [ ! -d workdir/"$path" ]; then
        if [ ! -d ../repos/"$path" ]; then
            echo "No directory ../repos/$path. Run the top-level setup.sh script first." >&2
            exit 1
        fi

        depth=$(echo "$path" | awk -F/ '{ print NF }')
        if [ "$depth" -eq 1 ]; then
            ln -sfn ../../repos/"$path" workdir/"$path"
        elif [ "$depth" -eq 2 ]; then
            ln -sfn ../../../repos/"$path" workdir/"$path"
        else
            echo "Unknown depth of path $path." >&2
            exit 1
        fi
    fi
}

test -d workdir || mkdir workdir
test -d workdir/libs || mkdir workdir/libs

check_exists_and_create_symlink "unikraft"
check_exists_and_create_symlink "libs/lua"
