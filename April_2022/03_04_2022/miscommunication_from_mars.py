n = int(input())
data = [int(input()) for i in range(n)]
d = int(input())
xorr = int(input())

ans = []
for i in range(len(data)):
    for j in range(len(data)):
        if(i != j and abs(data[i]-data[j]) == d and data[i]^data[j] == xorr):
            x = sorted([data[i],data[j]])
            if(x not in ans):
                ans.append(x)
for i in ans:
    print(i[0],i[1],sep="\t")