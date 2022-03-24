r = int(input())
c = int(input())
data = []
for i in range(r):
    data.append(list(map(int,input().split())))
new = []
for i in range(r):
    temp = []
    for j in range(c):
        final = data[i][j]
        minn = min([data[k][j] for k in range(r)])
        maxx = max([data[i][k] for k in range(c)])
        temp.append(final+minn+maxx)
    new.append(temp)
for i in new:
    for j in i:
        print(j,end=' ')
    print()