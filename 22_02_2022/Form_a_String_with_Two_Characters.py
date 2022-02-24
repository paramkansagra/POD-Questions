from itertools import combinations


n = input()
data = []
x = []
for i in n:
    if(i not in data):
        data.append(i)
    x.append(i)
        
        
final = []
lol = list(combinations(data,2))
maxx = 0
for i,j in lol:
    string = ""
    for k in n:
        if(k!=i and k!=j):
            string += k
    flag = True
    for i in range(1,len(string)-1):
        if(string[i]!=string[i-1] and string[i] != string[i+1]):
            flag = False
            break
    if(flag):
        final.append(string)
        maxx = max(len(string),maxx)
xx = []
for i in final:
    if(len(i) == maxx):
        xx.append(i)
print(min(xx))
