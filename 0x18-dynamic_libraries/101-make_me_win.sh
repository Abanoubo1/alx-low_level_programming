#!/bin/bash
wget -P /tmp https://github.com/Abanoubo1/alx-low_level_programming/raw/master/0x18-dynamic_libraries/queue.so
export LD_PRELOAD=/tmp/queue.so
