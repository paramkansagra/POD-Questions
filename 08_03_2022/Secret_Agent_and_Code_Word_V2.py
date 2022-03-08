x=input().split()
v=set('AEIOU')
for i in range(len(x)):
    l=0
    for j in range(len(x[i])):
        for k in range(len(x)):
            if x[i]!=x[k] and x[i][j] in x[k]:
                if len(set(v-set(x[i])))==len(set(v-set(x[k]))):
                    l+=1
    if l==len(x[i]):
        print(x[i])
        exit(0)