Problem:

Validate if a given string is numeric.

Some examples:
"0" => true
" 0.1 " => true
"abc" => false
"1 a" => false
"2e10" => true

Note: It is intended for the problem statement to be ambiguous. You should gather all requirements up front before implementing one.

Breakdown:
This problem was really easy.
I need 7 boolean variables so I can decide whether a string is a valid number or not. I am going to need; hasNum, hasE, hasSign, hasComma, hasSpace, isFloat and noMore.
First scan each char of the string and check every boolean to see if the character is accepted as part of a number.

The conditions that the string must have in order to be a valid number are:
There can only be spaces at the start or end of the string.
There can only be one e and point.
If there is no e there can only be one sign, if not there can be two of them.
Signs can only be at the start of a number.
There must be numbers in both sides of e.
If thee string has accepted non numerical chars it will not be accepted if it doesn't have numbers.
