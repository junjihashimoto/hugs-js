var Module;
if (!Module) Module = (typeof Module !== 'undefined' ? Module : null) || {};

Module['locateFile']=function (p){
  var path = require('path');
  var base = __dirname;
  return path.join(base,p);
};
Module['noInitialRun']=true;
Module['noExitRuntime']=true;
