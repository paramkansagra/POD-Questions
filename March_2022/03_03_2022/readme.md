Bit Masking

Bit masking is an important phenomenon which is very much helpful in graphical applications. In bit masking, bitwise operations are used to on, off, toggle and query status of bits. Bitwise OR operation with ‘1’ sets a bit on and bitwise OR with ‘0’ leaves a bit unchanged. Bitwise AND operation with a ‘0’ leaves it off and bitwsie AND with ‘1’ leave it unchanged. To toggle a bit, that is to change the bit from ‘0’ to ‘1’ or vice versa it has to be XOR-ed with ‘1’ or ‘0’ as required.

Querying a bit can be acheived using AND operation, that is to know the status of the least significant bit (right most) of a number ‘x’, AND operation can be perfomed with 1. If the least significant bit is 1 then the result of the bitwise AND operation is 1 and it is 0 otherwise. Similarly ‘x’ AND 2 will return 2 when the second bit from right is 1 and 0 otherwise. To check the third, fourth bit and so on bitwise AND operation may be performed with numbers 4, 8, 16 and so on.

Given two unsigned integers ‘M’ and ‘N’, write a C program to find out the bit positions with same bits. For example, when M is 268435446 and N is 1006, unsinged integers a re represented using 4 bytes that is 32 bits internally and representation of these numbers internally are:

M - 00001111111111111111111111110110

N - 0000000000000000000001111101110

Number of bits positions with same bits is 12 and they are:

1, 2, 3, 6, 7, 8, 9, 10, 29, 30, 31, 32

Bit positions are numbered 1 to 32 from right to left.

Input Format

First line contains the value of M

Next line contains the value of N

Output Format

Print the bit positions with same bits on a line and separated by a space