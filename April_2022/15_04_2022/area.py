n = int(input())
data = [list(map(int,input().split())) for i in range(n)]
for x,y,z in data:
    count = 0
    while(z>=x):
        count += y
        z = z - (2/3)*x
    if(round(z) == x): count += y
    print(count)