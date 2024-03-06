#!/bin/bash

set -e
set -o pipefail

cd $(dirname -- "$( readlink -f -- "$0"; )")

cp -R --preserve=mode ./cfg/* /
