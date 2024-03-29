#!/bin/bash

set -e
set -o pipefail

ROOT=/mnt/slack

cd $(dirname -- "$( readlink -f -- "$0"; )")

cleanup() {
    rm -- $ROOT/setup.sh || :
}
trap cleanup EXIT

./cfg.sh

cp /etc/wpa_supplicant/wpa_supplicant.conf $ROOT/etc/wpa_supplicant.conf
cp -L /etc/ssl/certs/* /mnt/slack/etc/ssl/certs/ || :

echo "Enter hostname:"
read new_hostname
echo $new_hostname > $ROOT/etc/HOSTNAME

cat << EOF > $ROOT/etc/hosts
#
# hosts         This file describes a number of hostname-to-address
#               mappings for the TCP/IP subsystem.  It is mostly
#               used at boot time, when no name servers are running.
#               On small systems, this file can be used instead of a
#               "named" name server.  Just add the names, addresses
#               and any aliases to this file...
#

# For loopbacking.
127.0.0.1       localhost
::1             localhost
# Same thing for the default hostname if nothing was set up by netconfig:
127.0.0.1       $new_hostname
::1             $new_hostname
EOF

cat << EOF > $ROOT/setup.sh
#!/bin/bash

ldconfig

echo "==================== Enter the root password ===================="
passwd

echo "==================== Create a user ===================="
adduser

update-ca-certificates

echo "https://mirror.yandex.ru/slackware/slackware64-15.0/" > /etc/slackpkg/mirrors
EOF

./chroot.sh /bin/bash /setup.sh

[[ -d $ROOT/root/sys/ ]] || cp -R --preserve=mode,timestamp ./ $ROOT/root/sys/
./chroot.sh /bin/bash /root/sys/programs.sh
