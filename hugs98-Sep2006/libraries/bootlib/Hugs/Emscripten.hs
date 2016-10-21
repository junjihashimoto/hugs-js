{-# LANGUAGE ForeignFunctionInterface #-}
module Hugs.Emscripten where
import Foreign.C.String
import Hugs.Prelude
-- void emscripten_run_script(const char *script) 
foreign import ccall "emscripten.h" emscripten_run_script :: CString -> IO ()
