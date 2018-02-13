Problem:
Sometimes it is of great importance to know which day of the week a given date will be. And we start searching for the nearest calendar. Being lucky we may find one. And find out that this one does not contain the date you need. What a pity!
Thus, you are asked to create a calendar that will be able to process any given date in the years range from 1600 till 2400. Given a date, your program should print (see the examples below) a correct calendar for the month containing the date. Do not forget about the leap years. A year is leap if it is multiple of 4 except it is multiple of 100 except it is multiple of 400. For example, 1996 is a leap year, 1900 is not a leap year (it is a multiple of 4 and multiple of 100) and 2000 is a leap year (it is a multiple of 4, multiple of 100 and multiple of 400 as well).
Input
The first line of input contains a date, i.e. three integer numbers: day (1–31), month (1–12) and year (1600–2400) separated by spaces.
Output
The output should contain exactly 7 lines with the correct calendar for the month containing the given date. Format of a calendar is given by the examples below. And do not forget to highlight the given date by square brackets.

Breakdown:
To solve this problem, the first obstacle encountered was that I did not know how to find out which day of the week a certain year started. I was going to do something with a hash table but I thought I could do some research first. And I stumbled across Zeller’s rule, I found it in this article http://mathforum.org/dr.math/faq/faq.calendar.html.
Since the enumeration of the months works different for Zeller’s rule, I need to convert it from my input. For every month M, a simple (M + 10) % 13 will do.
Now that I know how to get which day of the week a certain date is, I just have to build the calendar around that day.
If the month is February, then I will have to know if it is a leap year. And I also need to calculate if the month has 30 or 31 days.
In an array of length 35, I am going to store the days. Positions 0, 7, …, 28 are for Monday and so on.
Now I just have to print all.
