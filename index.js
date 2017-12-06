
var Hugs = function() {
  this.HUGSBASE=__dirname+'/hugs98-Sep2006/hugsdir';
  process.env['HUGSFLAGS']='-P'+this.HUGSBASE+'/packages/*'
  process.env['HUGSDIR']=this.HUGSBASE;
  this.runhugs = require('./js/hugs');
};
　
Hugs.prototype.init = function() {
  this.runhugs.ccall('setupNodeEnv',null,[],[]);
  this.runhugs.ccall('initSystem',null,[],[]);
  this.runhugs.ccall('interpreterNoLoopNoPrompt',null,[],[]);
};

Hugs.prototype.run = function(cmd) {
  var mytext = '';
  this.runhugs.print = function (text){
    mytext+=text;
  }
  this.runhugs.ccall('initInterpreter',null,[],[]);
  this.runhugs.ccall('stringInput',null,['string'],[cmd]);
  this.runhugs.ccall('input',null,['number'],[5]);
  this.runhugs.ccall('doCommand',null,[],[]);
  return mytext;
};

module.exports = Hugs;
