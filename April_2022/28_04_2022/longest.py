n = int(input())
data = dict()
for i in range(n):
    x,y = list(map(int,input().split()))
    if(x in data):
        data[x].append(y)
    else:
        data[x] = [y]
max_length = 0
pos = 0
for i in data:
    if(max(data[i])-min(data[i])>max_length):
        max_length = max(data[i])-min(data[i])
        pos = i
print(pos,min(data[pos]))
print(pos,max(data[pos]))
print(max_length)
print(len(data[pos]))