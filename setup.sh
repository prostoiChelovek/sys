#!/bin/bash

set -e
set -o pipefail

ROOT=/mnt/slack

cd $(dirname -- "$( readlink -f -- "$0"; )")

cleanup() {
    rm -- $ROOT/setup.sh || :
}
trap cleanup EXIT

cat << EOF > $ROOT/setup.sh
#!/bin/bash

ldconfig

echo "==================== Enter the root password ===================="
passwd

echo "==================== Create a user ===================="
adduser
EOF

./chroot.sh /bin/bash /setup.sh
