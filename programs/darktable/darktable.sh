#!/bin/bash

set -e
set -o pipefail

cd $(dirname -- "$( readlink -f -- "$0"; )")

cd ./darktable-4.6.1/
mkdir -p build/
cd build
cmake \
    -DCMAKE_BUILD_TYPE=Release \
    -DPugixml_INCLUDE_DIR=../../pugixml-1.14/build/dist/include/ \
    -DPugixml_LIBRARY=../../pugixml-1.14/build/dist/lib64/libpugixml.a \
    ..
make install -j8

