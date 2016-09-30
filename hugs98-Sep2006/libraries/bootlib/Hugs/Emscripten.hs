{-# LANGUAGE ForeignFunctionInterface #-}
module Hugs.Emscripten where
import Foreign.C.String
import Hugs.Prelude

{-# CFILES Hugs/hugs_emscripten.c #-}

-- void emscripten_run_script(const char *script) 
foreign import ccall "emscripten.h" emscripten_run_script :: CString -> IO ()

emRunScript :: String -> IO ()
emRunScript script = withCString script emscripten_run_script


foreign import ccall "wrapper"  wrap_callback :: IO () -> IO (FunPtr (IO ()))

foreign import ccall "hugs_emscripten.h" add_event_callback :: CString -> CString -> (FunPtr (IO ())) -> IO ()
foreign import ccall "hugs_emscripten.h" test_add_event_callback :: CString -> CString -> (FunPtr (IO ())) -> IO ()

addEventCallback :: String -> String -> IO () -> IO ()
addEventCallback idName eventName callback = do
  callbackC <- wrap_callback callback
  withCString idName $ \idNameC ->
    withCString eventName $ \eventNameC ->
      add_event_callback idNameC eventNameC callbackC


testAddEventCallback :: String -> String -> IO () -> IO ()
testAddEventCallback idName eventName callback = do
  callbackC <- wrap_callback callback
  withCString idName $ \idNameC ->
    withCString eventName $ \eventNameC ->
      test_add_event_callback idNameC eventNameC callbackC
