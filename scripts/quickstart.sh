#!/bin/bash

set -e

# Get script directory
script_dir=$(dirname $0)
pushd $script_dir > /dev/null

pip install -U -r ../requirements.txt

# Elevate privileges
sudo -v

# Check if sudo
if [ "$EUID" -ne 0 ]
  then echo "Installing dependencies requires sudo. Please enter your password."
fi

# Update apt packages
sudo apt-get update

# Setup wine
sudo dpkg --add-architecture i386
sudo apt-get update
sudo apt-get install wine32

# Install MIPS assembler
sudo apt-get install binutils-mips-linux-gnu

# Setup compiler
sudo ./setup_prodg_linux.sh

# Check if disc/SLUS_204.85 exists
echo "Setup complete!"
if [ ! -f ../disc/SLUS_204.85 ]; then
  echo "Now, copy SLUS_204.85 from your copy of the game to the 'disc' directory of this project."
  echo "Then build the project by running the 'build.sh' script."
  exit
fi
echo "To build the project, run the 'build.sh' script."

popd > /dev/null
