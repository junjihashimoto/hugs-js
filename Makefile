EMCONFIGURE=emconfigure
EMMAKE=emmake
EMCC=emcc
NODE=node

SRCDIR=hugs98-Sep2006

FLAGS= -O2 \
 -s TOTAL_MEMORY=67108864 \
 --preload-file $(SRCDIR)/hugs-dir/usr/local/lib/hugs/packages@/usr/local/lib/hugs/packages \
 -s EXPORTED_FUNCTIONS="['_initSystem','_printBanner','_main']" \
 -s MAIN_MODULE=1 --js-library $(SRCDIR)/src/library_hugs.js

hugs98-Sep2006/src/hugs.js:
	cd $(SRCDIR);$(EMCONFIGURE) ./configure --prefix=/usr
	cd $(SRCDIR);$(EMMAKE) make
	cd $(SRCDIR);mkdir hugs-dir
	cd $(SRCDIR);$(EMMAKE) make install DESTDIR=$(PWD)/$(SRCDIR)/hugs-dir
	cd $(SRCDIR);$(EMMAKE) make install DESTDIR=$(PWD)/$(SRCDIR)/hugs-dir

web/hugs.html:$(SRCDIR)/src/hugs.js
	$(EMCC) $(PWD)/$(SRCDIR)/src/hugs.bc -o web/hugs.html $(FLAGS)

