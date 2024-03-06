#!/bin/bash

set -e
set -o pipefail

cd $(dirname -- "$( readlink -f -- "$0"; )")

cd ./dwm/

make clean install

