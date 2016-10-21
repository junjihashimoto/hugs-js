{-# LANGUAGE ForeignFunctionInterface #-}
module JsWrapper where
import Foreign.C.String
import Foreign.Ptr
--import Hugs.Prelude

{-# CFILES jswrapper.c #-}


--typedef void (*em_callback_func)(void);
--extern void emscripten_set_main_loop(em_callback_func func, int fps, int simulate_infinite_loop);


foreign import ccall "emscripten.h" emscripten_run_script :: CString -> IO ()
foreign import ccall "emscripten.h" emscripten_set_main_loop :: (FunPtr (IO ())) -> Int -> Int -> IO ();

emRunScript :: String -> IO ()
emRunScript script = withCString script emscripten_run_script

emSetMainLoop :: IO () -> IO ()
emSetMainLoop loopfunc = do
  callbackC <-wrap_callback loopfunc
  emscripten_set_main_loop callbackC 1000 1

foreign import ccall "wrapper"  wrap_callback :: IO () -> IO (FunPtr (IO ()))
foreign import ccall "jswrapper.h" add_event_callback :: CString -> CString -> (FunPtr (IO ())) -> IO ()
foreign import ccall "jswrapper.h" set_class_name :: CString -> CString -> IO ()
foreign import ccall "jswrapper.h" ready :: (FunPtr (IO ())) -> IO ()
foreign import ccall "jswrapper.h" set_message :: CString -> IO ()
foreign import ccall "jswrapper.h" get_cpu_flag :: IO Int
foreign import ccall "jswrapper.h" is_node_js :: IO Int


addClickCallback :: String -> IO () -> IO ()
addClickCallback idName callback = do
  callbackC <- wrap_callback callback
--  print "callbackC"
  withCString idName $ \idNameC -> do
--    print "withcstring"
    withCString "click" $ \eventNameC -> do
--      print "withcstring"
      add_event_callback idNameC eventNameC callbackC


setClassName :: String -> String -> IO ()
setClassName idName className = 
  withCString idName $ \idNameC ->
    withCString className $ \classNameC ->
      set_class_name idNameC classNameC

waitReady :: IO () -> IO ()
waitReady callback = do
  callbackC <- wrap_callback callback
  ready callbackC

setMessage :: String -> IO ()
setMessage message = do
  withCString message $ \messageC ->
    set_message messageC

getCpuFlag :: IO Bool
getCpuFlag = do
  val <- get_cpu_flag
  return (val == 1)

isNodeJs :: IO Bool
isNodeJs = do
  val <- is_node_js
  return (val == 1)
