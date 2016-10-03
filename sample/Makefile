EMCONFIGURE=emconfigure
EMMAKE=emmake
EMCC=emcc
NODE=node

SRCDIR=../hugs98-Sep2006

FLAGS= -O2 \
 -s TOTAL_MEMORY=268435456 \
 -s   TOTAL_STACK=20971520 \
 --preload-file $(SRCDIR)/hugs-dir/usr/local/lib/hugs/packages@/usr/local/lib/hugs/packages \
 --preload-file lib@/ \
 -s RESERVED_FUNCTION_POINTERS=1024 \
 -s MAIN_MODULE=1 --js-library $(SRCDIR)/src/library_hugs.js

all: runhugs.html

runhugs.html:$(SRCDIR)/src/runhugs.bc
	$(EMCC) $(SRCDIR)/src/runhugs.bc -o runhugs.html $(FLAGS)

