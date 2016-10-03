#include <emscripten.h>
#include "jswrapper.h"


void add_event_callback(char* id_name,char* event_name,void (*callback)()){
  EM_ASM_({
      var idName=Pointer_stringify($0);
      var eventName=Pointer_stringify($1);
      var callback=$2;
      document.getElementById(idName).addEventListener(eventName, function(){
	  Runtime.getFuncWrapper(callback, 'v')();
	});
    },id_name,event_name,callback);
}

void set_class_name(char* id_name,char* class_name){
  EM_ASM_({
      var idName=Pointer_stringify($0);
      var className=Pointer_stringify($1);
      document.getElementById(idName).className=className;
    },id_name,class_name);
}

void ready(void (*callback)()){
  EM_ASM_({
      window['jQuery'](Runtime.getFuncWrapper($0, 'v'));
    },callback);
}

void set_message(char* message){
  EM_ASM_({
      var mess=Pointer_stringify($0);
      document.getElementById('message').innerHTML=mess;
    },message);
}

int get_cpu_flag(){
  return EM_ASM_INT({
      var flag=Pointer_stringify($0);
      return document.getElementById(flag).checked;
    },"cpu");
}

