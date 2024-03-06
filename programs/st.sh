#!/bin/bash

set -e
set -o pipefail

cd $(dirname -- "$( readlink -f -- "$0"; )")

cd ./st/

make clean install

