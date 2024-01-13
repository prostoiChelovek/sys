#!/bin/bash

set -e
set -o pipefail

DST="./dst"
ROOT=/mnt/slack

# https://stackoverflow.com/a/246128/9577873
SOURCE=${BASH_SOURCE[0]}
while [ -L "$SOURCE" ]; do # resolve $SOURCE until the file is no longer a symlink
  DIR=$( cd -P "$( dirname "$SOURCE" )" >/dev/null 2>&1 && pwd )
  SOURCE=$(readlink "$SOURCE")
  [[ $SOURCE != /* ]] && SOURCE=$DIR/$SOURCE # if $SOURCE was a relative symlink, we need to resolve it relative to the path where the symlink file was located
done
DIR=$( cd -P "$( dirname "$SOURCE" )" >/dev/null 2>&1 && pwd )
cd $DIR

cleanup() {
    for d in sys/firmware/efi/efivars proc sys dev/pts dev/shm dev run tmp; do
        umount $ROOT/$d || echo "COULD NOT UMOUNT $ROOT/$d !!! ERROR IGNORED AND YOU SHOULD FIX IT YOURSELF"
    done
}
trap cleanup EXIT

# stolen from arch-chroot
mount /proc "$ROOT/proc" -t proc -o nosuid,noexec,nodev
mount /sys "$ROOT/sys" -t sysfs -o nosuid,noexec,nodev,ro
mount /dev "$ROOT/dev" -t devtmpfs -o mode=0755,nosuid
mount /dev/pts "$ROOT/dev/pts" -t devpts -o mode=0620,gid=5,nosuid,noexec
mount /dev/shm "$ROOT/dev/shm" -t tmpfs -o mode=1777,nosuid,nodev
mount /run "$ROOT/run" --bind --make-private
mount /tmp "$ROOT/tmp" -t tmpfs -o mode=1777,strictatime,nodev,nosuid
mount /sys/firmware/efi/efivars "$ROOT/sys/firmware/efi/efivars" -t efivarfs -o nosuid,noexec,nodev

cp -L /etc/resolv.conf $ROOT/etc/

chroot $ROOT /usr/bin/env -i \
    HOME=/root \
    TERM="$TERM" \
    PATH=/bin:/sbin:/usr/bin:/usr/sbin \
    $1

