#!/bin/bash

set -e
set -o pipefail

ROOT=/mnt/slack

cd $(dirname -- "$( readlink -f -- "$0"; )")

cp -R --preserve=mode ./cfg/* $ROOT/
