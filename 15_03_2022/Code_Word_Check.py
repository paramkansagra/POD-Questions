n = int(input())
data = [input() for i in range(n)]
w = input()
pos = [int(input()) for i in range(4)]

letter = [w[i-1] for i in pos]
if("".join(letter) in data):
    print("Valid")
else:
    print("Invalid")