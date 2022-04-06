Lucky card

An ordered letter pattern is a set of letters in alphabetical order. In a lucky game, a player gets a letter card which has got a matrix of alphabets in it. The letter card has N rows of M random letters in each row. An ordered letter pattern P of length L <= Min(N,M) will be announced.

If the letters of ‘P’ occurs continuously in the ordered letter pattern that could be formed with letters either along row or column in the letter card of the player then the player is lucky.

Given the matrix in the letter card of the player and and an ordered letter pattern P, develop pseudocode and C code to print “Lucky Player”. Otherwise, print “Unlucky Player”

For example, if the player has a letter card that has the following matrix

Q W E R\
A S D F\
Z X C V

and the announced ordered pattern P is AFS, then the player is lucky because the ordered letter pattern that could be formed with ASDF matches with the given pattern P.

Input Format :- \
Enter the number of letter collection, N\
Enter the number of letters M in each collection\
Enter N*M characters one in each row\
Enter the pattern P

Output Format
Ordered letters in collection that matches with ordered letters in pattern

Lucky Player\
or\
Unlucky Player