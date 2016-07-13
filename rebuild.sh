#!/bin/bash

DOWNLOAD_DIR=http://cvs.haskell.org/Hugs/downloads/2006-09/
HUGS_FILENAME=hugs98-Sep2006
HUGS_TAR_FILE=${HUGS_FILENAME}.tar.gz

EMCONFIGURE=emconfigure
EMMAKE=emmake
EMCC=emcc
NODE=node

# The build process creates files that it later executes.
# We need to copy over ones from a separate native build and ensure they are not overwritten.
echo "Patching"
cd build/${HUGS_FILENAME}-js
$EMMAKE make
$EMMAKE make install
cp src/hugs hugs.bc
# TODO: This leaves the absolute directory in the JS file, which is annoying.
$EMCC -O2 hugs.bc -o hugs.html -s TOTAL_MEMORY=67108864 --preload-file hugs-dir/lib/hugs/packages/@`pwd`/hugs-dir/lib/hugs/packages/ \
-s EXPORTED_FUNCTIONS="['_initSystem','_printBanner','_main','_interpreterNoLoop','_doCommand','_initInterpreter','_printf']"
