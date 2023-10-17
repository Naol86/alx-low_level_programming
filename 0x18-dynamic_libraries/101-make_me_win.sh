#!/bin/bash
wget -q --output-document=$HOME/lib101-makemewin.so https://github.com/Naol86/alx-low_level_programming/blob/main/0x18-dynamic_libraries/100-c.so
export LD_PRELOAD=$HOME/lib101-makemewin.so
