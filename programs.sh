#!/bin/bash

# Run this in slackware

set -e
set -o pipefail

cd $(dirname -- "$( readlink -f -- "$0"; )")

./programs/imlib2.sh
./programs/feh.sh

