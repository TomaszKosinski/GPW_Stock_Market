#!/bin/sh

mkdir ./build
cd ./build
cmake ..
make
cp ./GPW_Stock_Market_App ../
cd ..