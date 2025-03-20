#!/bin/bash

if [ $EUID -ne 0 ]; then
    echo "Please run this script as root or with sudo."
    exit 1
fi

g++ main.cpp -o penis
cp penis /bin/
rm penis
echo "I guess its installed now! Run penis to use it :)"
