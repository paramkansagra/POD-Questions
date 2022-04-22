d = int(input())
x = {6:9,8:8,9:6,0:0,1:1}
final = []
for i in x:
    for j in x:
        first = 10*i+j
        second = 10*x[j]+x[i]
        if(first-second == d):
            if(first<second):
                final = [str(i)+str(j),str(x[j])+str(x[i])]
            else:
                final = [str(x[j])+str(x[i]),str(i)+str(j)]
print(*final)