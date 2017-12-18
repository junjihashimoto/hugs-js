#include <emscripten.h>
#include "hugs_emscripten.h"

extern void em_asm_3(char*,void*,void*,void*);

void add_event_callback(char* id_name,char* event_name,void (*callback)()){
  em_asm_3(
"      var idName=Pointer_stringify($0);"
"      var eventName=Pointer_stringify($1);"
"      var callback=$2;"
"      document.getElementById(idName).addEventListener(eventName, function(){"
"	  Runtime.getFuncWrapper(callback, 'v')();"
"	});"
    ,id_name,event_name,callback);
}

void test_add_event_callback(char* id_name,char* event_name,void (*callback)()){
  em_asm_3(
"      var idName=Pointer_stringify($0);"
"      var eventName=Pointer_stringify($1);"
"      Runtime.getFuncWrapper($2, 'v')();"
    ,id_name,event_name,callback);
}
