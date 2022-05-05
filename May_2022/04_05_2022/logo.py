row = int(input())
col = int(input())
data = [input().split() for i in range(row)]
count = 0
flag = False
for i in range(row-1):
    for j in range(col-1):
        if('x' in data[i]):
            flag = True
        if(data[i][j] == 'l' and data[i+1][j] == 'l' and data[i+1][j+1] == 'l'):
            count += 1
if(flag):
    print(count)
else:
    print("Invalid")