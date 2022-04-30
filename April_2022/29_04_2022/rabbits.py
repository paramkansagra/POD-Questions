def fib(i,m):
    a = 1*i
    b = 2*i
    arr=[a,b]
    for i in range(3,m):
        arr.append(arr[-1]+arr[-2])
    return (arr)
n=int(input())
m=int(input())
for i in range(n,0,-1):
    arr = fib( i , m)
    if (arr[-1])%3==0:
        print(i,arr[-1])
        exit()