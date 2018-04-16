Problem:

You've built an inflight entertainment system with on-demand movie streaming.

Users on longer flights like to start a second movie right when their first one ends, but they complain that the plane usually lands before they can see the ending. So you're building a feature for choosing two movies whose total runtimes will equal the exact flight length.

Write a function that takes an integer flight_length (in minutes) and a list of integers movie_lengths (in minutes) and returns a boolean indicating whether there are two numbers in movie_lengths whose sum equals flight_length.

When building your function:

    Assume your users will watch exactly two movies
    Don't make your users watch the same movie twice
    Optimize for runtime over memory

Breakdown:
This problem can be solved in many ways but to optimize runtime over memory I am going to solve it implementing a hash table.
So, first I initialize the hash table and then I start going through every element in the array.
I calculate the complement of the element with target - element = complement and search that number in the hash table.
If the complement is stored in the hash and it is not the same as the element, the function must return true, if not it stores the element in the hash and move to the next number.
If it goes through all the array without returning true it should return false.
