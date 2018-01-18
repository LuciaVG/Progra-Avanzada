Problem:
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].


Breakdown:

This problem can be solved using a hash table.
You go through every element of the array.
Calculate the number you need to get the target.
Search for that number in the hash table.
if it's there, you know the two numbers, if not you store that number in the hash table and move to the next number.
