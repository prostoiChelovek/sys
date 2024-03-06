#!/bin/bash

set -e
set -o pipefail

cd $(dirname -- "$( readlink -f -- "$0"; )")

cp -R ./cfg-local/* $HOME/ | :
cp -R ./cfg-local/.* $HOME/ | :
