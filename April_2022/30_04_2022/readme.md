Power Related Numbers

A number ‘x’ is a power related number if sum of digits of pow(x,p) = x where p is an integer >=2. For example, 8 is a power related number as sum of digits of pow(8, 3) = 8. Given the value of lower limit l, upper limit u and a number p, write a C++ code to find the minimum and maximum power realted numbers.

For example, if l is 1, u is 100, p is 5 then the minimum power related number is 1 with power as 5 and pow(1, 5) = 1 and maximum power related number is 46 with power as 5 and power (46, 5) = 205962976.

Input Format

First line contains the value of lower limit, l

Next line contains the value of upper limit, u

Next line contains the value of power, p

Output Format

First line should contain the minimum power related number, its power and pow(min, p) separated by a space

Next line should contain the maximum power related number, its power and pow(max, p) separated by a space