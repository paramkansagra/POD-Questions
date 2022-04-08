n = list(input())
n = list(map(int,n))
m = int(input())
x = n[-1:-m-1:-1]
x = x[::-1]
last = int("".join(list(map(str,x))))
while(True):
    l = sum(x[-1:-m-1:-1])
    if(l<=last):
        x.append(l)
    else:
        break
if(x[-1] == last):
    print("Generated")
else:
    print("Cannot be generated")