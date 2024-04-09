#!/bin/bash

set -e
set -o pipefail

cd $(dirname -- "$( readlink -f -- "$0"; )")

cd ./graphviz/

./configure --cache-file=config.cache \
    --enable-static \
    --with-qt=no \
    --enable-swig=no \
    --enable-sharp=no \
    --enable-d=no \
    --enable-go=no \
    --enable-guile=no \
    --enable-java=no \
    --enable-javascript=no \
    --enable-lua=no \
    --enable-perl=no \
    --enable-php=no \
    --enable-python=no \
    --enable-python3=no \
    --enable-r=no \
    --enable-ruby=no \
    --enable-tcl=no \
    --with-gdk-pixbuf=no \
    --with-gtk=no \
    --with-gtkgl=no \
    --with-gtkglext=no \
    --enable-man-pdfs=no

make -j$(nproc)
make install

