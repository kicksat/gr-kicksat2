#!/bin/sh
export VOLK_GENERIC=1
export GR_DONT_LOAD_PREFS=1
export srcdir=/home/zacman/Documents/gr-kicksat2/lib
export PATH=/home/zacman/Documents/gr-kicksat2/build/lib:$PATH
export LD_LIBRARY_PATH=/home/zacman/Documents/gr-kicksat2/build/lib:$LD_LIBRARY_PATH
export PYTHONPATH=$PYTHONPATH
test-kicksat2 
