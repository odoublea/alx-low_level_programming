#!/bin/bash
wget -P /tmp https://github.com/odoublea/alx-low_level_programming/blob/main/0x18-dynamic_libraries/Gigahack.so
export LD_PRELOAD=/tmp/Gigahack.so
