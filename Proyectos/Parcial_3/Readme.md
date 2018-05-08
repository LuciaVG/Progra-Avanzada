Problem:

  Rohit dreams he is in a shop with an infinite amount of marbles. He is allowed to select n marbles. There are marbles of k different colors. From each color there are also infinitely many marbles. Rohit wants to have at least one marble of each color, but still there are a lot of possibilities for his selection. In his effort to make a decision he wakes up. Now he asks you how many possibilities for his selection he would have had. Assume that marbles of equal color can't be distinguished, and the order of the marbles is irrelevant.

  Input:
    The first line of input contains a number T <= 100 that indicates the number of test cases to follow. Each test case consists of one line containing n and k, where n is the number of marbles Rohit selects and k is the number of different colors of the marbles. You can assume that 1<=k<=n<=1000000.

  Output:
    For each test case print the number of possibilities that Rohit would have had. You can assume that this number fits into a signed 64 bit integer.

Brakdown:
  First I thought that in order to solve this problem I was going to search through some arrays to make marble combinations, but I found out that I misunderstood it and the solution is simply calculating the combinations of marbles. Before I started programming it I had to do some research on probability since I am not good at it. And I know it is supposed to be easy but I don't really like it.

  The formula to calculate combinations is

        n!/((n-k)!k!) 

  so I applied it in the program to calculate the combinations.
