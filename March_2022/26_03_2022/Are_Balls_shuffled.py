n = int(input())
x = [input() for i in range(n)]
y = [input() for i in range(n)]

flag = False

for i in range(n):
    if("".join(x) == "".join(y)):
        flag = True
        break
    a = x[0]
    x = x[1:]+[a]

if(flag):
    print("Not Shuffled")
else:
    print("Shuffled")