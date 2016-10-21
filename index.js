
var Hugs = function() {
    this.HUGSBASE=__dirname+'/hugs98-Sep2006/hugs-dir/usr/local/lib/hugs';
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
    this.runhugs.ccall('initInterpreter',null,[],[]);
    this.runhugs.ccall('stringInput',null,['string'],[cmd]);
    this.runhugs.ccall('input',null,['number'],[5]);
    this.runhugs.ccall('doCommand',null,[],[]);
};

module.exports = Hugs;
