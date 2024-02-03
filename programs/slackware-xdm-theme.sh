#!/bin/bash

set -e
set -o pipefail

cd -- "$(dirname -- "$(readlink -f -- "$0")")"

cd ./slackware-xdm-theme/

[[ -f ./slackware-xdm-theme.tar.xz ]] || wget "https://harrier.slackbuilds.org/misc/slackware-xdm-theme.tar.xz"
./slackware-xdm-theme.SlackBuild
installpkg /tmp/slackware-xdm-theme-20170522-x86_64-1_SBo.tgz

