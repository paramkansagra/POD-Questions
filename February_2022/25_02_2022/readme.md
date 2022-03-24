Simple String Subtraction


Given two strings S1 and S2, write a C program to perform simple string subtraction. Simple string subtraction does character subtraction from last to first characters of the strings. Letters in English alphabet are given forward and reverse positions 1 to 26. In forward position letter ‘a’ is at 1 and ‘z’ is at 26. In reverse position letter ‘z’ is at 1 and letter ‘a’ is at 26. Character subtraction of character C2 from character C1 (C1 - C2) works as follows:

(i) If C1 and C2 are same then C1 – C2 = C1

(ii) Otherwise C1 – C2 = C3 where C3 is the character in forward position ‘d’ where d = i – j, i and j are the foward position of C1 and C2 respectively and d>0 and

C1 – C2 = C3 where C3 is the character in reverse position ‘d’ where d = positive value of (i – j), i and j are the foward position of C1 and C2 respectively and d<0.

For example, if S1 is elephant and S2 is apple then S3 is eleoslbo and if S1 is ball and S2 is cell then S3 is zwll

Boundary Conditions

The input will be given such that length of S1 is always greater than or equal to length of S2 and all characters in S1 and S2 are in lower case.

Input Format

First line contains the string S1

Next line contains the string S2

Output Format

String obtained after simple string subtraction