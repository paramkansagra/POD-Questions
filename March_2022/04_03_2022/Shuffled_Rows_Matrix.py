row = int(input())
col = int(input())
data = [list(map(int,input().split())) for i in range(row)]
flag = True
for i in data:
    x = set(i)
    for j in data:
        y = set(j)
        if(x != y):
            flag = False
if(flag == True):
    print("Shuffled Row Matrix")
else:
    print("Not Shuffled Row Matrix")