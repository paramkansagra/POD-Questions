arr=[list(map(int,input().split())) for i in range(4)]
arr2=[i[0] for i in arr]
arr2+=[i[1] for i in arr]
if len(set(arr2))==4:
    print("Yes")
else: 
    print("No")

