#!/usr/bin/sh

git clone https://github.com/mozilla/seasponge.git

cp build.sh seasponge/.

cd seasponge

sudo bash build.sh
