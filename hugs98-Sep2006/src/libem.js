var LibraryEm = {
  em_asm_0: function(exp){
    eval(Pointer_stringify(exp));
  },
  em_asm_1: function(exp,arg0){
    var $0=arg0;
    eval(Pointer_stringify(exp));
  },
  em_asm_2: function(exp,arg0,arg1){
    var $0=arg0;
    var $1=arg1;
    eval(Pointer_stringify(exp));
  },
  em_asm_3: function(exp,arg0,arg1,arg2){
    var $0=arg0;
    var $1=arg1;
    var $2=arg2;
    eval(Pointer_stringify(exp));
  },
  em_asm_4: function(exp,arg0,arg1,arg2,arg3){
    var $0=arg0;
    var $1=arg1;
    var $2=arg2;
    var $3=arg3;
    eval(Pointer_stringify(exp));
  }
};

mergeInto(LibraryManager.library, LibraryEm);
