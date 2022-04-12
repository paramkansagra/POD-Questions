n = int(input())
data = list(map(int,input().split()))
x = sum(data)/len(data)
if(x == int(x)):
    print("Yes")
    print(int(x))
else:
    print("No")