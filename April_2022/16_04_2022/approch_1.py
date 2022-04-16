n = int(input())
data = [str(bin(int(input())))[2:] for i in range(n)]
m = str(bin(int(input())))[2:]

dis = 99999
final = []
for i in data:
    count = 0
    for k in range(-1,-min(len(i),len(m))-1,-1):
        if(i[k] != m[k]):
            count += 1
    count += abs(len(i)-len(m))
    if(count<dis):
        final = [i]
        dis = count
    elif(count == dis):
        final.append(i)
for i in final:
    print(int(i,2))