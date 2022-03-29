Help the Kid to Gather Dolls
A game is organized for kids to collect the dolls that are put in ‘n’ boxes. The boxes are numbered from 1 to n. The kid can move either forward or backward and he has to make one step for moving to the next box or to the previous box.

The dolls are put in a box number one more than the number of letters that lie outside the boundary made by the start and end letters. For example, if the doll name is Edwina then it will be put in box number 4, the boundary set by this doll name is a and e, letter ‘d’ lies within the boundary whereas letters ‘w’, ‘i’ and ‘n’ lies outside the boundary hence there are three letters that are outside boundary so doll will be put in box number 4. Initially the kid stand at a place that is one step away from box number 1. For example if six doll names Benedetta, Edwina, Gloria, Henriette, Laura and Marilee are given to the kid then he has to make the following moves:

f 8

b 4

f 1

f 1

b 3

n 0

and totally 17 steps to pick all the dolls. ‘f’ indicates that he has to move in the forward direction and ‘b’ indicates that the kid has to move in the backward direction, ‘n’ indicates that no need to move.

Given the list of dolls that has to be collected by a kid, write C/C++ program to find out the direction and number of steps to be made by the kid and also the total number of steps he has to make to pick all the dolls.

Boundary conditions

Doll names can be length 30

Mixed cases will be used in doll names

Input format

First line contains the number of dolls given for the kid, n

Next ‘n’ lines contain the name of the dolls

Output Format

For each doll name print the direction of move and number of steps to be moved separated by a tab (‘f’ indicates forward, ‘b’ indicates backward move and ‘n’ indicates ‘no move’

Print the total number of steps to be made by the kid to pick all the dolls