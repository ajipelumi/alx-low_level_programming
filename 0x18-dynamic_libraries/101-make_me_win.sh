#!/bin/bash
wget -P /tmp https://github.com/ajipelumi/alx-low_level_programming/blob/9c00c7387516ad2b8305964f985f0fc73c553018/0x18-dynamic_libraries/makemewin.so
export LD_PRELOAD=/tmp/makemewin.so
