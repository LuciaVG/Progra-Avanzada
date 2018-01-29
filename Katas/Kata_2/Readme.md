Problem:
A password is considered strong if below conditions are all met:

    It has at least 6 characters and at most 20 characters.
    It must contain at least one lowercase letter, at least one uppercase letter, and at least one digit.
    It must NOT contain three repeating characters in a row ("...aaa..." is weak, but "...aa...a..." is strong, assuming other conditions are met).

Write a function strongPasswordChecker(s), that takes a string s as input, and return the MINIMUM change required to make s a strong password. If s is already strong, return 0.

Insertion, deletion or replace of any one character are all considered as one change.

Breakdown:

This problem is kind of difficult. The only solution I could think of was:

Having a variable for each condition that must be fulfilled and going through every char of the string to check which of the conditions are not met in that string.

At the end, make the calculation of how many changes should be made (Here is where I had some problems but I tried).
