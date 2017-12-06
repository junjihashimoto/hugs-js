EMCONFIGURE=emconfigure
EMMAKE=emmake
EMCC=emcc
NODE=node

SRCDIR=../hugs98-Sep2006

FLAGS=  -O2 \
 -s TOTAL_MEMORY=268435456 \
 -s MAIN_MODULE=1 \
 -s WASM=1 \
 --memory-init-file 0 \
 --pre-js pre.js \
 --post-js post.js \
 --js-library $(SRCDIR)/src/library_hugs.js \
 --js-library $(SRCDIR)/src/libem.js

all: hugs.js

hugs.js:$(SRCDIR)/src/hugs.bc pre.js post.js
	$(EMCC) $(SRCDIR)/src/hugs.bc -o hugs.js $(FLAGS)
