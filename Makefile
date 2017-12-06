EMCONFIGURE=emconfigure
EMMAKE=emmake
EMCC=emcc
NODE=node

SRCDIR=hugs98-Sep2006

FLAGS= -O2 \
 -s TOTAL_MEMORY=67108864 \
 --preload-file $(SRCDIR)/hugsdir/packages@/usr/local/lib/hugs/packages \
 -s EXPORTED_FUNCTIONS="['_initSystem','_printBanner','_main']" \
 -s MAIN_MODULE=1 \
 -s WASM=1 \
 --js-library $(SRCDIR)/src/library_hugs.js \
 --js-library $(SRCDIR)/src/libem.js

all: web/hugs.html js/hugs.js

$(SRCDIR)/libraries/bootlib/.stamp:
	cd $(SRCDIR);$(EMCONFIGURE) ./configure --prefix=/usr/local
	cd $(SRCDIR)/packages/base;$(EMCONFIGURE) ./configure --prefix=/usr/local
	cd $(SRCDIR);$(EMMAKE) make
#	cd $(SRCDIR);mkdir hugs-dir
#	cd $(SRCDIR);$(EMMAKE) make install DESTDIR=$(PWD)/$(SRCDIR)/hugs-dir

web/hugs.html:$(SRCDIR)/libraries/bootlib/.stamp
	$(EMCC) $(PWD)/$(SRCDIR)/src/hugs.bc -o $@ $(FLAGS)

#runhugs/runhugs.html:$(SRCDIR)/libraries/bootlib/.stamp
#	$(EMCC) $(PWD)/$(SRCDIR)/src/runhugs.bc -o $@ $(FLAGS)

js/hugs.js:$(SRCDIR)/libraries/bootlib/.stamp
	cd js;make

