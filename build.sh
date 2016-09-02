#!/bin/bash

EMCONFIGURE=emconfigure
EMMAKE=emmake
EMCC=emcc
NODE=node

cd hugs98-Sep2006
$EMCONFIGURE ./configure --prefix=/usr
$EMMAKE make
mkdir hugs-dir
$EMMAKE make install DESTDIR=`pwd`/hugs-dir
# TODO: This leaves the absolute directory in the JS file, which is annoying.
$EMCC -O2 hugs.bc -o hugs.html -s TOTAL_MEMORY=67108864 --preload-file hugs-dir/lib/hugs/packages/@/usr/hugs-dir/lib/hugs/packages/ \
-s EXPORTED_FUNCTIONS="['_initSystem','_printBanner','_main']"
