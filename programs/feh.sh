#!/bin/bash

# https://slackbuilds.org/repository/15.0/graphics/feh/

set -e
set -o pipefail

cd $(dirname -- "$( readlink -f -- "$0"; )")

if [[ ! -f /usr/include/Imlib2.h ]]; then
    echo "You gotta install imlib2 first"
    exit 1
fi

cd ./feh/

[[ -f ./feh-3.6.1.tar.bz2 ]] || wget "https://feh.finalrewind.org/feh-3.6.1.tar.bz2"
INOTIFY=1 ./feh.SlackBuild
installpkg /tmp/feh-3.6.1-x86_64-1_SBo.tgz

