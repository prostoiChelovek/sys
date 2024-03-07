#!/bin/bash

set -e
set -o pipefail

cd $(dirname -- "$( readlink -f -- "$0"; )")

cd ./zathura/

meson -Dtests=disabled build
ninja -C build install

