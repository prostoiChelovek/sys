#!/bin/bash

# https://slackbuilds.org/repository/15.0/libraries/imlib2/

set -e
set -o pipefail

cd $(dirname -- "$(readlink -f  -- "$0")")

cd ./imlib2/

[[ -f ./imlib2-1.12.1.tar.xz ]] || wget "https://sourceforge.net/projects/enlightenment/files/imlib2-src/1.12.1/imlib2-1.12.1.tar.xz"
./imlib2.SlackBuild
installpkg /tmp/imlib2-1.12.1-x86_64-1_SBo.tgz

