hugs-js
========

[![Build Status](https://travis-ci.org/junjihashimoto/hugs-js.svg?branch=master)](https://travis-ci.org/junjihashimoto/hugs-js)

This project is porting hugs98 to emscripten.

All commands(hugs, runhugs and ffihugs) can execute on node-js.


# Install from source

Install emscripten and setup it.

```
git clone https://github.com/juj/emsdk.git
cud emsdk && ./emsdk install sdk-incoming-64bit
cd emsdk && ./emsdk activate sdk-incoming-64bit
source ./emsdk/emsdk_env.sh
```

When you Build hugs-js

```
make
```

