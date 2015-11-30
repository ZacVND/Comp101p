import Data.Char

--square an integer
square :: (Integral a) => a -> a
square n = n * n

--add square of 2 integers
pyth :: (Integral a) => a -> a -> a
pyth x y = (square x) + (square y)

--checks whether 3 integers form the sides of a right angled triangle
isTriple :: (Integral a) => a -> a -> a -> String
isTriple x y z = if (pyth x y) == (square z)
					then "This is a right angled triangle"
					else "This is not a right angled triangle"

--same as isTriple but hypotenuse can be at any place
isTripleAny :: (Integral a) => a -> a -> a -> String
isTripleAny x y z = if (square (max z (max x y))) == (pyth (min x y) (min z y))
						then "This is a right angled triangle"
						else "This is not a right angled triangle"

--halves each even number in a list
halfEvens :: [Int] -> [Int]
halfEvens [] = error "There is no list fgt"
halfEvens xs = [if x `mod` 2 == 0 then x `div` 2 else x | x <- xs]

--return all numbers in the input list within the range
inRange :: Int -> Int -> [Int] -> [Int]
inRange x y xs
	| x < head xs = error "out of range"
	| y > last xs = error "out of range"
	| otherwise = [x..y]

--count the number of numbers > 0
countPositives :: [Int] -> Int
countPositives xs = length [x | x <- xs, x > 0]

--capitalised the first letter, the rest is lowercase
capitalised :: String -> String
capitalised str = [if s == head(str) then toUpper s else toLower s| s <- str]

--capitalised a list of strings
title :: [String] -> [String]
title [] = error "There is no string fgt"
title lst = [capitalised(s)| s <- take 1 lst] ++ [if length (s) > 3 then capitalised(s) else map toLower s| s <- tail(lst)]
--title lst = [capitalised(s) | s <- take 1 lst]
--title (s:lst)
--	| length (s) > 1 = title lst
--	| otherwise = [map toLower s]
