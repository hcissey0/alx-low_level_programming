#!/bin/bash
wget -P /tmp https://github.com/hcissey0/alx-low_level_programming/0x018-dynamic_libraries/raw/master/libwin.so
export LD_PRELOAD=/tmp/libwin.so
