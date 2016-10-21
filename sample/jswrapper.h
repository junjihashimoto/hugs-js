#include "HsFFI.h"

extern void add_event_callback(char* id_name,char* event_name,void (*callback)());
extern void set_class_name(char* id_name,char* class_name);
extern void ready(void (*callback)());
extern void set_message(char*);
extern int get_cpu_flag();
extern int is_node_js();
