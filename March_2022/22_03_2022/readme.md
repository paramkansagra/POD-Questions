Math Cum Tie Skill Competition

A compeititon is conducted to test mathematics and tieing skills of kids, some number of beads in three colors red, green and blue are kept in a bowl. Each kid will be given a number ‘n’ and kid has to tie tree strings of beads by mixing the colored beads.

One string of beads is formed with a number ‘m’ as per the following rules:

1. Totally there should be 20 beads in each string and always beads are added to the left side of the string.

2. The kid has to repeatedly divide the number ‘m’ by 3 till it becomes zero, find the remainder ‘r’ and quotient ‘q’. Make ‘n’ as ‘q’.

3. After each division if the remainder is zero then the kid has to add a red bead into the string, if the reminder is one then he has to add green bead and when the remainder is two he has to add a blue bead.

4. When the value of ‘m’ becomes zero, add red beads for the remaining positions. That if four beads were already added by the division process then sixteen more red beads have to added to complete the string with twenty beads.

The first string of beads ‘S’ has to be formed with the given number ‘n’, the second string of beads ‘S1’ has to be formed with a number ‘p’ where p > n and the string of beads S1 will change only by one bead color as comapred to S. The third string of beads ‘S2’ has to be formed with a number ‘q’ where q > n and string of beads S2 will change exactly by two bead colors when compared to S.

Given the number ‘n’, write a C program to find the numbers with which the second and third strings can be tied and also print the color of the beads in the three strings from left to right. For example, if the value of ‘n’ is 5 then the numbers that can be used to tie the strings are 8 and 6 and the color of the beads on the three strings are:

rrrrrrrrrrrrrrrrrrgb

rrrrrrrrrrrrrrrrrrbb

rrrrrrrrrrrrrrrrrrbr

Input Format

First line contains the number, n

Output Format

First line print the numbers that can be used to form the second and the third string. Separate the numbers by a tab

Next line print the color of the beads tied in the first string from left to right

Next line print the color of the beads tied in the second string from left to right

Next line print the color of the beads tied in the third string from left to right