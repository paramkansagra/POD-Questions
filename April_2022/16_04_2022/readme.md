Minimum Bin-Distance Numbers

Two numbers n1 and n2 are said to be have a bin-distance of ‘x’ if ‘x’ bits are different in the corressponding positions in binary representation of n1 and n2. For example, numbers 4 (100) and 6 (110) are having a distance of 1 whereas numbers 2027 (11111101011) and 119 (1110111) are having a distance of 7.

Given a collection ‘c’ of ‘n’ numbers and a number ‘m’, write a C++ program to find the number(s) in ‘c’ that is having minimum bin-distance with m. For example, given three numbers 4, 2 and 5 in collection ‘c’ and if m = 6 then numbers 4 and 2 are having a minimum distance of 1 with 6.

Hint: Try to solve this problem without doing decimal to binary conversion

Input Format

First line contains the number of integers ‘n’ in C

Next ‘n’ lines contain the numbers in C

Next line contains the number m

Output Format

Print all the elements having minimum bin-distance with m. Print one number in one line. Print the minimum bin-distance elements in the order in which it was given in the input