#Problem

You are given an integer N, followed by N lines of input (1 <= N <= 100). Each line of input contains one or several words separated with single spaces. Each word is a sequence of letters of English alphabet containing between 1 and 10 characters, inclusive. The total number of words in the input is between 1 and 100, inclusive.

Your task is to reverse the order of words in each line of input, while preserving the words themselves. The lines of your output should not have any trailing or leading spaces.

Example

input
3
Hello World
Bye World
Useless World

output
World Hello
World Bye
World Useless

#Breakdown

To solve this problem I thought about the strategy I used in this partial's project. In the project I had to read a string o numbers separated by a space and store that into an array. I used the same function to do that strtok() to store all in an array, then I simply printed the content backwards.

One difficulty I encountered was that the new line character from the file was giving me problems. I simply deleted it using the same strtok() function.
