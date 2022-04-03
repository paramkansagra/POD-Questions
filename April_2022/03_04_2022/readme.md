Miscommunication from Mars

Space scientist is communicating a group of ‘n’ numbers from Mars where ‘n’ is an even number. The ‘n’ numbers are formed from a set of numbers ‘s’ and each number is paired with itself. But the numbers are not ordered. That is if six numbers are to be communicated and they are formed from two numbers 3 and 4 then they can be 3 4 3 4 3 3. But during communication one of the numbers ‘n1’ is wrongly communicated as ‘n2’, both n1 and n2 are from ‘s’.

Given the difference between sum of numbers at the sending side and sum of the set of numbers at the recieving side and XOR of values at the recieving end, write a C++ program to identify the numbers that might have miscommuincated. For example given that s = {2, 11, 4, 3, 7, 9} and difference in sum as 1 and XOR of the data at the recieving end as 1 then the numbers that might be miscommunicated are 2 or 3. And if s = {2, 11, 4, 3, 7, 9} and difference in sum as 2 and XOR of the data at the recieving end as 14 then the numbers that might be miscommunicated are 7 or 9.

The input is given such that only two numbers have chance of getting miscommunicated.

Input Format

First line contains the number of elements in set s, n

Next ‘n’ lines contain the numbers in set s

Next line contains the difference in sum, d

Next line contains the XOR value of data at the recieving end

Output Format

Print the two numbers that might have got miscommunicated in sorted order in a single line separated by a tab