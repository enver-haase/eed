#!/bin/bash

source $HOME/esp-idf/export.sh

project=$(cat project-name)
version=$(cat version.txt)
time_stamp=$(date +%Y%m%d_%H%M%S)

echo "#define QMSD_VERSION \"${project}_${version}_$time_stamp\"" > main/qmsd_version.h

idf.py clean
idf.py build

