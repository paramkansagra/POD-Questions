Derivative Index of a string

A string S is said to be  derivable from a string 'w'  if 

1) S is a substring of W.

For eg., S=bcd,  W= abcde.

Here, we say that S is a derivative of W of level 0. 

2). S is made up of a few symbols from W, without changing the order in which the symbols appear in W.

S= abcd ; W = taxbyced.

Here the order of the symbols: a,b,c,d (these are the symbols that appear in S) in S is the same as that of those symbols in W.  By saying `order of a,b,c,d is same as in S and W', we mean like : `If `b' appears before 'a' in S, 'b' appears before 'a' in W also.

Here we say that S is derivative of W of level 1

3) S is made up of symbols from W by changing the order in which they appear in W.

For Eg. S=abcd; W=bsacd.

Here 'a' appears after 'b' in W, but, a appears before b in W.

Here, we say that S is aderivative of level 2.  

Derivative Index:

If S is a derivative of W, we compute the derivative index as follows.

1. The derivative index is zero, for the derivatives of level 0 and 1.

2. The derivative index for the derivatives of level 2 is calculated as follows:

We denote by Pw(a), is the the position index of the symbol a in W.  If a occurs in more than one position in W, PW(a) will be the position index  with the smallest index . If W=aabab, PW(a)=1 and PW(b) = 3.

If S is derivative of W of level 2, the derivative index =  Σa in S   (Pw(a) - PS(a).)

Eg.  S= abcd W= btacd : Here PS(a)=1, PS(b)=2, PS(c)=3, PS(d)=4; PW(a)=3, PW(b)=1,  PW(c)=4, PW(d)=5

So, the derivative index = (3-1) + (1-2) +(4-3) + (5-4) = 2.

Note : If none of the symbols of S are in W, then we say that S is not a derivative of W.  

Given two words W and S, Write a code to compute the derivative levels , derivative index when S is a derivative of W and the derivative level, derivative index when  is aderivative of S.

If S is not aderivative of W (or W is not a derivative of S), your program should print -1 and there is no derivative index for this.

Input format:

Enter the first Word S

Enter the second  Word W :

Output format:

If S is a derivative of W, 

output the level of the derivative

Output the respective derivative index

If S is not a derivative of W, Output  -1.

If Wis a derivative of S:

output the level of the derivative

Output the respective derivative index

If W is not a derivative of S Output  -1.

Illustration:

Input 
eb

abcdef

output:

3

4

-1