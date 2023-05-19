#!/bin/bash 
if [ ! -d "$build" ]; then
  ./build.sh
fi

./build/main