{-# LANGUAGE ForeignFunctionInterface #-}
module Emscripten  where
import Hugs.Prelude
-- void emscripten_run_script(const char *script) 
foreign import ccall "emscripten.h" emscripten_run_script :: Ptr Char -> IO ()
