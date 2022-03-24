n = [i for i in input()]
j = sorted(n)
for i in range(len(n)):
    if(n[i] == j[i]):
        print(i+1)