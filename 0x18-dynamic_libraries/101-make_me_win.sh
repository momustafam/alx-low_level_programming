#!/bin/bash
wget -P /tmp https://github.com/mohammed112025/alx-low_level_programming/raw/master/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
