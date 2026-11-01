#!/bin/bash

# Sets up the ProDG compilers + SCE Runtime Library to build the project.

set -e

WINE_ROOT=~/.wine/drive_c
TOP=$(cd "$(dirname "$0")"; pwd)/..

# The SDK (Runtime Library) version to install.
SDK_VER=242

die() { # perl-style `die` expressions.
	echo "Error: $@"
	exit 1
}

# downloads files without checking integrity
download() {
	echo "Downloading $1..."
	wget -qP /tmp $1

	BASENAME=$(basename $1)

	#echo "moving files out of /tmp"
	#mv /tmp/$BASENAME $TOP
}

echo Starting ProDG setup script...

# download required files (registry + SDK package)
download "https://github.com/fmil95/santamonica/releases/download/eegcc/ee-gcc2.95.3-136.tar.gz"

# apply environment variables from the registry file
# wine regedit prodg_env.reg

# Extract the compiler into the tools dir
echo "Extracting compiler to $TOP/tools..."
tar -xzf /tmp/ee-gcc2.95.3-136.tar.gz -C $TOP/tools

echo "Removing temporary files..."
rm /tmp/ee-gcc2.95.3-136.tar.gz

echo "Setup complete!"
