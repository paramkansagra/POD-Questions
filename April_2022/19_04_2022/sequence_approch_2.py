def sequence(n):
    if(n<=1):
        return n
    
    if(n%2 == 0):
        return sequence(n/2)
    else:
        return sequence(n//2)+sequence(n//2+1)

n = int(input())
data = list(map(int,input().split()))
check = True

for i in range(1,n+1):
    if(sequence(i) != data[i-1]):
        print("No")
        check = False
        print(i)
        break

if(check):
    print("Yes")