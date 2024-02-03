#!/bin/bash

set -e
set -o pipefail

cd $(dirname -- "$( readlink -f -- "$0"; )")

MIRROR_URL="rsync://mirror.yandex.ru/slackware"
URL="$MIRROR_URL/slackware64-15.0/slackware64"
DST=./dst

SLACKWARE_WEBSITE_URL="www.slackware.com"
GPG_KEY_URL="https://$SLACKWARE_WEBSITE_URL/infra/keys/GPG-KEY"

mkdir -p $DST

cd $DST

for soft_set in a ap d e f l n tcl x xap; do
    echo "==================== $soft_set ===================="
    rsync -rvh --ignore-existing --info=progress2 "$URL/$soft_set/" "./$soft_set/"
done

rsync "$URL/CHECKSUMS.md5" "$URL/CHECKSUMS.md5.asc" ./

echo "==================== Gonna be used to get GPG-KEY -- HTTPS certificate from $SLACKWARE_WEBSITE_URL ===================="
openssl s_client -showcerts -servername "$SLACKWARE_WEBSITE_URL" -connect "$SLACKWARE_WEBSITE_URL:443" <<< "Q" | openssl x509 -text | grep -iA2 "Validity"
read -p "You like it? " -r
if [[ ! $REPLY =~ ^[Yy]$ ]]
then
    echo "Idk man"
    exit 1
fi

wget -q "$GPG_KEY_URL"

echo "==================== GPG-KEY from $GPG_KEY_URL ===================="
gpg --import --import-options show-only ./GPG-KEY
read -p "Is it correct? " -r
if [[ ! $REPLY =~ ^[Yy]$ ]]
then
    echo "Idk man"
    exit 1
fi

gpg --import GPG-KEY
gpg --verify CHECKSUMS.md5.asc

tail +13 CHECKSUMS.md5 \
    | md5sum --ignore-missing -c --quiet - 2>&1 \
    | tee >(grep FAILED && grep FAILED | cut -f1 -d: | xargs rm) \
    || { echo  "Failed files removed. You gotta rerun the script" && exit 1; } \
    && echo "Checksums check out"

cd ..

