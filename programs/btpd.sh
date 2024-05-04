#!/bin/bash

set -e
set -o pipefail

cd $(dirname -- "$( readlink -f -- "$0"; )")

cd ./btpd/

./configure
make -j$(nproc)
make install

