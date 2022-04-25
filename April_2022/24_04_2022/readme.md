Common Points of Lines

Use Hint in the problem to solve it

A set of lines have same ‘y’ coordinates so that is not significant for this problem. Points on those lines are represented by a triplet (a,b,k) where a is the x-coordinate of the starting point of the line, and b is the x-coordinate of the ending point of the line. The points on the line are a+k, a+2k, a+3k ... a+n*k such that a<=a+k and a+nk<=b. For example, the points on the line represented by (1, 2, 0.3) are 1, 1.3, 1.6, 1.9. Given n lines (represented by the triplets), write a C++ code to print all points that are common to all the lines

Boundary Conditions

n<=10

a,b>=0

Number of points generated for each line <=50

Input Format

First line contains the number of lines, n

Next ‘n’ lines contain the start point, end point and the value of k separated by a space

Output Format

Print the points common to all lines in ascending order separated by a space

Hint

Comparison of floating point values in C++ is very precise and sometimes gives unexpected results. To avoid that

When comparing two floating point values a and b

(i) Instead of writing a<b, write as a<b+0.001, here a is read from user and b is computed by an expression

(ii) Instead of writing a==b, write as fabs(a-b)<a*0.001