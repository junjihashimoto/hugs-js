import qualified Data.Map as M
import qualified Data.List as L
import Control.Monad
import Data.IORef
import JsWrapper

data Disk=
    White
  | Black deriving (Read,Eq)

data WinDisk=
    WhiteWin
  | BlackWin
  | Draw deriving (Read,Eq)
                   
type Value=Int
type Pos=(Int,Int)
type Board=M.Map Pos Disk

value::Board->Disk->Value
value board disk=length $ filter (\(p,d)->d==disk) $ M.toList board

all' cond []  =False
all' cond list=all cond list

get = readIORef
set = writeIORef
newRef = newIORef

between::Pos->Pos->[Pos]
between posa@(xa,ya) posb@(xb,yb) 
  | xa==xb || ya==yb  ||  abs(xa-xb) == abs(ya-yb) = 
      map (\i -> plus i posa (direct posa posb)) [1..(dist posa posb -1)]
  | otherwise = []
  where
    dist   posa@(xa,ya) posb@(xb,yb) = max (abs (xa-xb)) (abs (ya-yb))
    direct::Pos->Pos->Pos
    direct posa@(xa,ya) posb@(xb,yb) = 
      let d = dist posa posb 
      in ((xb-xa) `div` d,(yb-ya) `div` d)
    plus::Int -> Pos -> Pos -> Pos
    plus i posa@(xa,ya) posd@(xd,yd) = (xa+xd*i,ya+yd*i)
    
allsame board disk posa posb=
  all' ( \pos -> M.lookup pos board == (Just disk)) (between posa posb) 


list3x3 :: Pos -> [(Int,Int)]
list3x3 (x,y) = [(x+x'',y+y'') | x'' <-[-1..1], y'' <-[-1..1]]

next::Board->Disk->[Pos]
next board disk = 
  let r = ndisk disk
      n = map fst $ filter (\(k,v)->v==r)    (M.toList board)
      n'= map fst $ filter (\(k,v)->v==disk) (M.toList board)
      s = filter (\(x,y)->0<=x&&x<8&&0<=y&&y<8) $ concat $ flip map n list3x3
      empty=filter (\pos-> M.lookup pos board == Nothing) s
  in L.nub $ filter (\e -> any (\n''-> allsame board r e n'') n' ) empty

ndisk disk=case disk of
  White -> Black
  Black -> White

put::Board->Disk->Pos->Board
put board disk pos =
  let r  = ndisk disk
      n' = map fst $ filter (\(k,v)->v==disk) (M.toList board)
      n'''= concat $ map (\n''-> if allsame board r pos n'' then between pos n'' else [] ) n'
  in foldr (\p->M.alter (\_ -> Just disk) p) board (pos:n''')
      
nboard::Board->Disk->[(Value,(Pos,Board))]
nboard board disk = 
  let n = next board disk
      b = map (put board disk) n
      p = map (flip value disk) b 
  in zip p $ zip n b



maximumBy :: (a -> a -> Ordering) -> [a] -> a
maximumBy cmp = foldr1 max'
  where max' x y = case cmp x y of
                        GT -> x
                        _  -> y

minimumBy :: (a -> a -> Ordering) -> [a] -> a
minimumBy cmp = foldr1 min'
  where min' x y = case cmp x y of
                        GT -> y
                        _  -> x

maxmin :: Board -> Disk -> Maybe Pos
maxmin board disk=
  case nboard board disk  of
    [] -> Nothing
    nb  -> Just $ fst $ snd $ maximumBy (\(a,_) (b,_) -> compare a b) nb

isFinish :: Board -> Maybe WinDisk
isFinish board = do
  let p' =next board Black
  let p''=next board White
  if p'==[] && p''==[] 
    then do
      if value board Black > value board White
        then Just BlackWin
        else if value board Black < value board White
          then Just WhiteWin
          else Just Draw
    else Nothing
  
initboard :: M.Map (Int,Int) Disk
initboard=M.insert (3,4) Black $
          M.insert (4,3) Black $
          M.insert (4,4) White $
          M.insert (3,3) White M.empty


posToString :: Pos -> String
posToString (x,y) = ((show x)++(show y))


setClass :: Pos -> String -> IO ()
setClass pos str = do
  setClassName (posToString pos) str

clearBoard = do
  forM_ [0..7] $ \x->
    forM_ [0..7] $ \y->
      setClass (x,y) ""
  
showBoard board disk = do
  clearBoard
  forM_ (M.toList board) $ \(pos,disk) -> do
    case disk of
      White -> setClass pos "white-disk"
      Black -> setClass pos "black-disk"
  case disk of
    White -> setMessage "White's turn"
    Black -> setMessage "Black's turn"
  case isFinish board of
    Just WhiteWin -> setMessage "White wins"
    Just BlackWin -> setMessage "Black wins"
    Just Draw -> setMessage "Draw"
    Nothing -> return ()


addClickEventAll board_ref func = do
  forM_ [0..7] $ \x->
    forM_ [0..7] $ \y->
      addClickCallback ("s"++(posToString (x,y))) $ func board_ref (x,y)


getClickEvent board_ref pos = do
  (board,disk) <- get board_ref
  let p' =next board disk
  (b,nd,retry) <- case  p' of
    [] -> return (board,ndisk disk,False)
    _  -> do
      if (filter (==pos) p')==[] 
        then return (board,disk,True)
        else do
          let b=put board disk pos
          return (b,ndisk disk,False)
  if not retry
    then do
      set board_ref (b,nd)
      showBoard b nd
      flg <- getCpuFlag
      if flg then cpuEvent board_ref else return ()
    else return ()
      


cpuEvent board_ref = do
  (board,disk) <- get board_ref
  let p'= maxmin board disk
  let b=case p' of 
        Just v -> put board disk v
        _      -> board
  set board_ref (b,ndisk disk)
  showBoard b (ndisk disk)

    
main= do
  print "wait ready"
  waitReady $ do
    print "newRef"
    board_ref <- newRef (initboard,Black)
    print "add event callback"
    addClickEventAll board_ref getClickEvent
    print "show board"
    showBoard initboard Black
    print "main loop"
    emSetMainLoop $ return ()
    print "main loop done"
  print "all done"
