n = int(input())
data = []
for i in range(n-1,-1,-1):
    temp = []
    for j in range(n-i-1):
        temp.append('.')
    temp.append('*')
    for j in range(i):
        temp.append('.')
    data.append(temp)

for i in data[::-1]:
    l = i + i[n-2::-1]
    print(*l)