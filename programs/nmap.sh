#!/bin/bash

set -e
set -o pipefail

cd $(dirname -- "$( readlink -f -- "$0"; )")

cd ./nmap/

./configure --without-zenmap --without-nping
make -j$(nproc)
make install

