Find Fruits Left Over

Fruit smash is an interesting online game in which three fruits apple, orange and mango are arranged in a linear fashion. If all the three different fruits occur adjacent then they are smashed. The smashing process continue till no three adjacent fruits are different. The smashing process starts from the left side. A single smash at point 'p' may initiate many subsequent smashes to the points 'q' < 'p' and all triplets on the left side must be smashed before the triplets on their right side. In the representation, letter ‘a’ is used for apple, ‘m’ for mango and ‘o’ for orange.

Given a string of letters representing the arrangement of fruits, write a C/C++ program to findout the fruits that are left over after the smashing process. If all the fruits are smashed then print ‘No fruit is left over’.

For example, if the input is amammoamaoo then the output is am representing that an apple and a mango is left over. If the input is momoaamoomaa then output should be ‘No fruit is left over’.

Boundary Conditions

The length of the string can be upto 200

Input Format

First line contain the string representing the arrangement of fruits. One letter for one fruit, ‘a’ for apple, ‘o’ for orange and ‘m’ for mango

Output Format

Print the letters of the fruits left over and if all the fruits are smashed then print ‘No fruit is left over’