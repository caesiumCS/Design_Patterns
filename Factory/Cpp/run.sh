#!/bin/bash 
if [ ! -d "$tmp" ]; then
  ./build.sh
fi

./build/main