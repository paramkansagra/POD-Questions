n= int(input())
data = [list(map(float,input().split())) for i in range(n)]
m = []

for a,b,c in data:
    x=a
    temp=[]
    while(x<=b):
        if(x == int(x)):
            temp.append(int(x))
        else:
            temp.append(round(x,2))
        x += c
        x = round(x,2)
    m.append(temp)
l=[]

for i in m:
    for j in i:
        flag = True
        for k in m:
            if(j not in k):
                flag  = False
        if(flag and j not in l):
            l.append(j)
print(*l)
