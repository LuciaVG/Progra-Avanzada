#Problem:

A character in UTF8 can be from 1 to 4 bytes long, subjected to the following rules:

For 1-byte character, the first bit is a 0, followed by its unicode code.
For n-bytes character, the first n-bits are all one's, the n+1 bit is 0, followed by n-1 bytes with most significant 2 bits being 10.

This is how the UTF-8 encoding would work:

Char. number range | UTF-8 octet sequence
(hexadecimal) | (binary)
--------------------+-------------------------------------
0000 0000-0000 007F | 0xxxxxxx
0000 0080-0000 07FF | 110xxxxx 10xxxxxx
0000 0800-0000 FFFF | 1110xxxx 10xxxxxx 10xxxxxx
0001 0000-0010 FFFF | 11110xxx 10xxxxxx 10xxxxxx 10xxxxxx

Given an array of integers representing the data, return whether it is a valid utf-8 encoding.

Note:
The input is an array of integers. Only the least significant 8 bits of each integer is used to store the data. This means each integer represents
only 1 byte of data.

Example 1:

data = [197, 130, 1], which represents the octet sequence: 11000101 10000010 00000001. Return true. It is a valid utf-8 encoding for a 2-bytes character followed by a 1-byte character.

Example 2:

data = [235, 140, 4], which represented the octet sequence: 11101011 10001100 00000100. Return false. The first 3 bits are all one's and the 4th
bit is 0 means it is a 3-bytes character. The next byte is a continuation byte which starts with 10 and that's correct. But the second continuation
byte does not start with 10, so it is invalid.

#Breakdown

To check if an array has a valid utf-f encoding you have to check some conditions:
  - First of all, since a character in utf-8 encoding can be at most 4 bytes long, none of the numbers in the array can be 225 or more.
  - When going through all elements of the array, there are other rules that a valid utf-8 encoding must follow:
      - If  0 <= element <= 127 the encoding still valid and you can move on to the next element.
      - If  128 <= element <= 191 the encoding is invalid.
      - If 192 <= element <= 223 the encoding still valid if the next element -> 128 <= element <= 191.
      - If 224 <= element <= 239 the encoding still valid if the next 2 elements -> 128 <= element <= 191.
      - If 240 <= element <= 247 the encoding still valid if the next 3 elements -> 128 <= element <= 191.
      - If 248 <= element <= 251 the encoding still valid if the next 4 elements -> 128 <= element <= 191.
      - If 252 <= element <= 253 the encoding still valid if the next 5 elements -> 128 <= element <= 191.
      - If element = 254 the encoding still valid and you can move on to the next element.
