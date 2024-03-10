#!/bin/bash

set -e
set -o pipefail

cd $(dirname -- "$( readlink -f -- "$0"; )")

cd ./vlc/vlc-3.0.20/

./configure
make -j$(nproc)
make install

