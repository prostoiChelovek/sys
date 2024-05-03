#!/bin/bash

set -e
set -o pipefail

cd $(dirname -- "$( readlink -f -- "$0"; )")

cd ./compton/

export NO_REGEX_PCRE=1 NO_LIBCONFIG=1 NO_DBUS=1
make -j$(nproc)
make install

