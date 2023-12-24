#!/bin/bash

set -e
set -o pipefail

# https://stackoverflow.com/a/246128/9577873
SOURCE=${BASH_SOURCE[0]}
while [ -L "$SOURCE" ]; do # resolve $SOURCE until the file is no longer a symlink
  DIR=$( cd -P "$( dirname "$SOURCE" )" >/dev/null 2>&1 && pwd )
  SOURCE=$(readlink "$SOURCE")
  [[ $SOURCE != /* ]] && SOURCE=$DIR/$SOURCE # if $SOURCE was a relative symlink, we need to resolve it relative to the path where the symlink file was located
done
DIR=$( cd -P "$( dirname "$SOURCE" )" >/dev/null 2>&1 && pwd )
cd $DIR

MIRROR_URL="rsync://mirror.yandex.ru/slackware"
URL="$MIRROR_URL/slackware-15.0/slackware"
DST=./dst

mkdir -p $DST

cd $DST

for soft_set in a ap d e f l n tcl x xap; do
    echo "==================== $soft_set ===================="
    rsync -rvh --ignore-existing --info=progress2 "$URL/$soft_set/" "./$soft_set/"
done
cd ..

