var hugs = require('emhugs');
var Hugs = new hugs(); // Create a interpreter-object.
Hugs.init(); // Initialize interpreter.
Hugs.run('1+2'); // Run a hugs-command.
Hugs.run(':load npm-sample/sort.hs'); // Read haskell-code.
Hugs.run(':main');  // Call main-function of the code.
