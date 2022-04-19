def x(n):
    if(n<=1):
        return n

    if(n%2 == 0):
        return x(n/2)
    else:
        return x(n//2)+x((n//2)+1)

n = int(input())
data = list(map(int,input().split()))
ans = [x(i) for i in range(1,n+1)]
if(ans == data):
    print("Yes")
else:
    print("No")
    for i in range(n):
        if(data[i] != ans[i]):
            print(i+1)
            break