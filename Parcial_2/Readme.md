#Problem

At the Infinite House of Pancakes, there are only finitely many pancakes, but there are infinitely many diners who would be willing to eat them! When the restaurant opens for breakfast, among the infinitely many diners, exactly D have non-empty plates; the ith of these has Pi pancakes on his or her plate. Everyone else has an empty plate.

Normally, every minute, every diner with a non-empty plate will eat one pancake from his or her plate. However, some minutes may be special. In a special minute, the head server asks for the diners' attention, chooses a diner with a non-empty plate, and carefully lifts some number of pancakes off of that diner's plate and moves those pancakes onto one other diner's (empty or non-empty) plate. No diners eat during a special minute, because it would be rude.

You are the head server on duty this morning, and it is your job to decide which minutes, if any, will be special, and which pancakes will move where. That is, every minute, you can decide to either do nothing and let the diners eat, or declare a special minute and interrupt the diners to make a single movement of one or more pancakes, as described above.

Breakfast ends when there are no more pancakes left to eat. How quickly can you make that happen?
Input

The first line of the input gives the number of test cases, T. T test cases follow. Each consists of one line with D, the number of diners with non-empty plates, followed by another line with D space-separated integers representing the numbers of pancakes on those diners' plates.
Output

For each test case, output one line containing "Case #x: y", where x is the test case number (starting from 1) and y is the smallest number of minutes needed to finish the breakfast.
Limits

1 ≤ T ≤ 100.
Small dataset

1 ≤ D ≤ 6.
1 ≤ Pi ≤ 9.
Large dataset

1 ≤ D ≤ 1000.
1 ≤ Pi ≤ 1000.

#Breakdown

I chose this problem because I thought I could solve it with a dynamic programming approach but later on the process I found that this was not the best idea.

I tried to address the problem with the following assumptions:

1. Eating and then moving pancakes is the same as moving and then eating. So I decided that the more convenient thing to do was divide all the pancakes first.
2. The more efficient thing to do is to always move the pancakes to an empty plate.
3. The more efficient way to divide the pancakes is to divide it in two.
4. The output should be the number of times you divided plus the max number of pancakes in a plate.

After thinking a little I found out that my assumption 3 was not true. For example 9, if you divide that stack in two stacks of 4 and 5, the min time is 6. but if you split the stack in 3 stacks of 3 the min time is 5.

I read a lot about DP and came up with dozens of different recursive functions and formulas but I could not find a solution for the problem and started thinking about changing the problem but I knew it could not be that difficult. I decided to tell my dad (who is a philosopher) and listen to his thoughts about it. I tried to explain him what Dynamic Programming was but he said; "I don't know what you're talking about but I think it's simple algebra".

I tried solving the problem with that approach and I realized he was right. I found out that the solution was really simple and was not DP.

So I just had to pick an x in the range 1 to max number of pancakes and then sum x and all the divisions of the nums in the array by x. And the answer is the min number that comes out.
