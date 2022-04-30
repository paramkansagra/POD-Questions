from math import pow

l = int(input())
u = int(input())
p = int(input())

min_found = False
max_found = False

for i in range(l,u+1):
    for j in range(2,p+1):
        x = list(map(int,list(str(int(pow(i,j))))))
        if(sum(x) == i):
            if(not min_found):
                print(*[i,j,int(i**j)])
                min_found = True
                break
    if(min_found):
        break
for i in range(u,l+1,-1):
    for j in range(2,p+1):
        s = list(map(int,str(int(pow(i,j)))))
        if sum(s) == i:
            print(*[i,j,int(i**j)])
            max_found = True
            break
    if max_found:
        break