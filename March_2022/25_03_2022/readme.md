Divide a Sequence of Elements

Aman doesn't like number theory. So, Aman's dad gives him a sequence of integers 1,2,3....n and asks him to divide it into two sets X and Y such that each element belongs to one set and intersection of X and Y is NULL. Aman needs to find two sets X and Y such that |SUM(X) - SUM(Y)| is as minimum as possible. That is the absolute difference of the elements in Set X and Set Y is minimum.

Input Format:

An integer n (1<=n<=10^9) which represents sequence of integers from 1,2,3...n

Output Format:

One integer which is the minimum possible value of |SUM(X)−SUM(Y)| if you divide the initial sequence 1,2,…,n into two sets X and Y.

Examples

Input : 5

Output : 1

Explanation:

Five numbers 1, 2, 3, 4 and 5 have to be considered and put in sets X and Y. Then the sets will be X = {1, 2, 5} and Y = {3, 4} with minimum difference in sum of elements

Input : 3

Output : 0

Explanation:

Three numbers 1, 2, 3 have to be considered and put in sets X and Y. Then the sets will be X = {1, 2} and Y = {3} with minimum difference in sum of elements