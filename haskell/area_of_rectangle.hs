-- Define a data type for a point in two-dimensional space
data Point = Point Double Double

-- Define a function to calculate the distance between two points
distance :: Point -> Point -> Double
distance (Point x1 y1) (Point x2 y2) = sqrt ((x2 - x1) ^ 2 + (y2 - y1) ^ 2)

-- Define a data type for a rectangle
data Rectangle = Rectangle Point Point

-- Define a function to calculate the area of a rectangle
area :: Rectangle -> Double
area (Rectangle (Point x1 y1) (Point x2 y2)) = abs ((x2 - x1) * (y2 - y1))

-- Define the main function
main :: IO ()
main = do
    putStrLn "Enter the coordinates of two points on a rectangle:"
    input <- getLine
    let [x1, y1, x2, y2] = map read (words input)
    let rectangle = Rectangle (Point x1 y1) (Point x2 y2)
    let rectangleArea = area rectangle
    putStrLn ("The area of the rectangle is: " ++ show rectangleArea)
