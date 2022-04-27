x=int(input())
w1=int(input())
w2=int(input())
n=int(input())
l=[i-x for i in list(map(int,input().split()))]
l2=[]
for i in l:
    if i%w1==0 or i%w2==0 or i%(w1+w2)==0:
        l2.append(1)
    else:
        a=i%max(w1,w2)
        if a%min(w1,w2)==0:
            l2.append(1)
        else:
            l2.append(0)
for i in l2:
    print(i,end=' ')