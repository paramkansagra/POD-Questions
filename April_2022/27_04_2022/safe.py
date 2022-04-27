import math

n = int(input())
x,y = list(map(float,input().split()))
a,b = 0,0
for i in range(1,n):
    l = math.sqrt(n*2-i*2)
    if(l == int(l)):
        a = max(i,int(l))
        b = min(i,int(l))
        break
if(abs(x-a)<=1 or abs(y-b)<=1):
    print("Unsafe")
else:
    print("Safe")