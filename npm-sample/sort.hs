import Data.List(sort)
import Control.Monad(forM_)

main = do
  str <- readFile "sort.hs"
  let lstr = sort $ lines str
  forM_ lstr putStrLn
