#!/bin/bash

# https://slackbuilds.org/repository/15.0/libraries/imlib2/

set -e
set -o pipefail

cd $(dirname -- "$(readlink -f  -- "$0")")

cd ./xdm-slackware-theme/

[[ -f ./xdm-slackware-theme-2020.0101.tar.gz ]] || wget "https://sourceforge.net/projects/xdm-slackware-theme/files/source/xdm-slackware-theme-2020.0101.tar.gz"
XDMBGIMG=Mars-Olympus-Mons.jpg ./xdm-slackware-theme.SlackBuild
installpkg /tmp/xdm-slackware-theme-2020.0101-noarch-1_SBo.tgz

