hugs-js
========

[![Build Status](https://travis-ci.org/junjihashimoto/hugs-js.svg?branch=master)](https://travis-ci.org/junjihashimoto/hugs-js)

This project is porting hugs98 to emscripten.

All commands(hugs, runhugs and ffihugs) can execute on node-js.


# At first, setup emscripten.

hugs-js needs emscripten not only to build hugs source codes but to use ffihugs.

A installation of emscripten is below.

```
> git clone https://github.com/juj/emsdk.git
> cud emsdk && ./emsdk install sdk-incoming-64bit
> cd emsdk && ./emsdk activate sdk-incoming-64bit
> source ./emsdk/emsdk_env.sh
```

# How to build hugs-js from source code.

Just type ```make```.
After compilation, you can use ./bin/{runhugs,hugs,ffihugs}.

```
> make
...
> echo 'main = print 123' > test.hs
> ./bin/runhugs test.hs
123
```

# How to install hugs-js as node-js module.

Install emhugs-package. 

```
> npm install emhugs.
```

Next, make a interpreter object and initialize it.
```run``` function sends hugs-commands to it.
The hugs-commands is the same as original hugs.
See following codes.

```
var hugs = require('emhugs');
var Hugs = new hugs(); // Create a interpreter-object.
Hugs.init(); // Initialize interpreter.
Hugs.run('1+2'); // Run a hugs-command.
Hugs.run(':load sort.hs'); // Read haskell-code.
Hugs.run(':main');  // Call main-function of the code.
```
