#!/bin/bash

set -e
set -o pipefail

cd $(dirname -- "$( readlink -f -- "$0"; )")

cd ./zathura-pdf-poppler/

meson build
ninja -C build install

