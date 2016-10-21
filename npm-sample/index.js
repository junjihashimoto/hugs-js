var hugs = require('emhugs');
var Hugs = new hugs();
Hugs.init();
Hugs.run('1+2');
Hugs.run(':load sort.hs');
Hugs.run(':main');
