#!/bin/bash

set -e
set -o pipefail

cd $(dirname -- "$( readlink -f -- "$0"; )")

cd ./mbedtls/

make clean
make lib -j$(nproc)
make install

