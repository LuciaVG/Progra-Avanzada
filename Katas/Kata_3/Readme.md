Problem:

Initially, there is a Robot at position (0, 0). Given a sequence of its moves, judge if this robot makes a circle, which means it moves back to the original place.

The move sequence is represented by a string. And each move is represent by a character. The valid robot moves are R (Right), L (Left), U (Up) and D (down). The output should be true or false representing whether the robot makes a circle.

Example 1:

Input: "UD"
Output: true

Example 2:

Input: "LL"
Output: false

Breakdown:
This problem was really easy to solve.
You create ints x and y and set them to 0.
Whenever you find 'U' you add one to y but if it is 'D' you substract one to Y.
Same with 'L' and 'R'. If it is 'R' you add one to x but if it is 'L' you substract one to x.
At the end, return true if x and y are both 0.
