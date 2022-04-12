Neutralizing Solution

A chemist tries to neutralzie a collection ‘C’ of solutions of different strength in ‘n’ cups. The task of the chemist is to find a neutralizing solution ‘X’ of strength ‘S’. In this task, the chemist will be given solutions in cups that are having strength that are integers and the strength of the neutralizing solution can be also only an integer.

In the process of neutralization he will be given a bigger vessel ‘B’ and he has to repeat the following steps:

1. For each cup Ci in C, pour solution ‘X’ into Ci. Strength of the combined solution in Ci will be S – Si, where Si is the strength of the original solution in Ci

2. For each cup Ci in C, pour the solution in Ci into ‘B’

3. Strength of the solution in ‘B’ is sum of the strength of the solutions in Ci

After this process if the strength of the solution in ‘B’ is zero then the solution ‘X’ is the neutralizing solution. Not all collection of solutions have a neutralizing solution. For example, if there are three cups with strength of solution as 1, 2 and 3 then the strength of the required neutralizing solution is 2.

Given the strength of the solutions in the ‘n’ cups, write a C++ program to check if there exist an solution ‘x’ that can neutralize them and determine the strength of the neutralizing solution if it exist.

Input Format

First line contains the value of n

Next line contains the strength of solutions in the cup and separated by a space

Output Format

In the frist line, print Yes if a neutralizing solution exist and No otherwise

In the next line, print the strength of the neutralizing solution if exists