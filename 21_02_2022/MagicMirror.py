# When a number ‘n’ is shown in a magic mirror it displays two numbers ‘n1’ and ‘n2’ in it. The number n1 is formed by the digits in odd position in n but in reverse and the number n1 is formed by the digits in even position in n but in reverse. For example, if the number 75346 the first number displayed in the mirror is 637 and the second number displayed in the mirror 45.
# Input Format
# First line contains the number n
# Output Format
# First line contains the number n1
# Next line contains the number n2

n = input()
print(n[::2][::-1])
print(n[1::2][::-1])