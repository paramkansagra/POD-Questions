def lol(n):
    l = []
    x = 3
    while(n != 0):
        if(n%x == 0):
            x = x*3
        else:
            x = x/3
            l.append(str(int(x)))
            n -= x
    return l[::-1]

def summ(m):
    x = 0
    for i in m:
        x += int(i)
    return x

n = int(input())
l = [lol(n),lol(n-1),lol(n-2)]
for i in l:
    if('1' not in i):
        for j in i:
            print(j,end="\t")
        print()
        print(summ(i))
        break