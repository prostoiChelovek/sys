#!/bin/bash

set -e
set -o pipefail

DST="./dst"
PKGTOOLS_PACK_PATH="a/pkgtools-15.0-noarch-42.txz"
INSTALLPKG=./installpkg
ROOT=/mnt/slack

cd $(dirname -- "$( readlink -f -- "$0"; )")

cd $DST

tar --strip-components=1 -Jxf $PKGTOOLS_PACK_PATH sbin/installpkg
sudo $INSTALLPKG --root $ROOT ./*/*.txz

