#!/bin/bash

set -e
set -o pipefail

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
