var Module;
if (!Module) Module = (typeof Module !== 'undefined' ? Module : null) || {};

Module['locateFile']=function (p){
  var path = require('path');
  var base = path.dirname(process['argv'][1]);
  return path.join(base,p);
};
