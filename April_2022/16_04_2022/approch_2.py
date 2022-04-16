n = int(input())
data = [int(input()) for i in range(n)]
m = int(input())

dis = 99999
final = []
for i in data:
    temp1 = i
    temp2 = m
    count = 0
    while(temp1 != 0 and temp2 != 0):
        if(temp1&1 != temp2&1):
            count += 1
        temp1 = temp1>>1
        temp2 = temp2>>1
    while(temp1 != 0):
        count += 1
        temp1 = temp1>>1
    while(temp2 != 0):
        count += 1
        temp2 = temp2>>1
    if(count<dis):
        dis = count
        final = [i]
    elif(count == dis):
        final.append(i)
for i in final:
    print(i)