n = int(input())
c = int(input())
data = [list(range(1,n+1))]
for i in range(2,c//n + 2):
    x = list(range((i-1)*n+1,i*n+1))
    if(i%2 == 0):
        x = x[-2:-n-1:-1]
        x.append(i*n)
    data.append(x)
    
for i in data:
    if(c in i):
        print('S'+str(i.index(c)+1))