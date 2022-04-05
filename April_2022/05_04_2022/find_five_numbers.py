from math import ceil
n = list(map(int,input().split()))
a = int(ceil(n[0]+n[5]-n[7])/2)
b = n[0]-a
c = n[1]-a
d = n[6]-c
e = n[-1]-d
print(a,b,c,d,e)