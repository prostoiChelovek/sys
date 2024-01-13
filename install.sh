#!/bin/bash

set -e
set -o pipefail

DST="./dst"
PKGTOOLS_PACK_PATH="a/pkgtools-15.0-noarch-42.txz"
INSTALLPKG=./installpkg
ROOT=/mnt/slack

# https://stackoverflow.com/a/246128/9577873
SOURCE=${BASH_SOURCE[0]}
while [ -L "$SOURCE" ]; do # resolve $SOURCE until the file is no longer a symlink
  DIR=$( cd -P "$( dirname "$SOURCE" )" >/dev/null 2>&1 && pwd )
  SOURCE=$(readlink "$SOURCE")
  [[ $SOURCE != /* ]] && SOURCE=$DIR/$SOURCE # if $SOURCE was a relative symlink, we need to resolve it relative to the path where the symlink file was located
done
DIR=$( cd -P "$( dirname "$SOURCE" )" >/dev/null 2>&1 && pwd )
cd $DIR

cd $DST

tar --strip-components=1 -Jxf $PKGTOOLS_PACK_PATH sbin/installpkg
sudo $INSTALLPKG --root $ROOT ./*/*.txz

