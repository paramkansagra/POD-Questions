x=int(input())
arr0=[1,2,3,4,5,6]
arr=[12,11,10,9,8,7]
arr2=[13,14,15,16,17,18]
col=['Green','Orange','Blue','Blue','Orange','Green']
if x%6==0:
    print(x+1)
    print('Green')
elif (x//6)%2!=0:
    y=x
    x=(x%6+6)
    print(-x+arr0[arr.index(x)]+y)
    print(col[arr.index(x)])
else:
    y=x
    x=(x%6+6)
    print(-x+arr2[arr.index(x)]+y)
    print(col[arr.index(x)])