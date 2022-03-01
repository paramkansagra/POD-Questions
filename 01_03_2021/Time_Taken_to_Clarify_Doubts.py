n = int(input())
data = [int(input()) for i in range(n)]
x = int(input())

final = [0]*n
count = 0

while(sum(data) != 0):
    for i in range(n):
        if(data[i] == 0):
            continue
        else:
            if(data[i] > x):
                count += x
                data[i] -= x
            elif(data[i] == x):
                count += x
                data[i] = 0
                final[i] = count
            else:
                count += data[i]
                data[i] = 0
                final[i] += count
for i in final:
    print(i)