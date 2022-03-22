def string(n):
    s = ""
    while(n != 0):
        r = n%3
        n = n//3
        if(r == 0):
            s = 'r' + s
        if(r == 1):
            s = 'g' + s
        if(r == 2):
            s = 'b' + s
    
    if(len(s) != 20):
        s = 'r'*(20-len(s)) + s
    return s

def count(s1,s2):
    x = 0
    for i in range(20):
        if(s1[i] != s2[i]):
            x += 1
    return x

n = int(input())
l = n
q = n
p = n
s1 = string(n)
s2 = string(p)
s3 = string(q)
while(True):
    if(count(s1,s2) == 1):
        break
    p += 1
    s2 = string(p)
while(True):
    if(count(s1,s3) == 2):
        break
    q = q+1
    s3 = string(q)
print(p,q,sep="\t")
print(s1)
print(s2)
print(s3)