#!/bin/bash

set -e

if [ $EUID -ne 0 ]; then
    echo "Please run this script as root or with sudo."
    exit 1
fi

g++ -Wall -Wextra -pedantic -O2 main.cpp -o p4n1s
cp p4n1s /usr/local/bin/
rm p4n1s
echo "I guess its installed now! Run p4n1s to use it :)"
