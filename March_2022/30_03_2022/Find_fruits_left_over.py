from itertools import permutations
n = list(input())
x = ["a","m","o"]
while(True):
    flag = False
    for i in range(len(n)-2):
        if(sorted(n[i:i+3]) == x):
            del n[i:i+3]
            flag = True
            break
        
    if(flag == False):
        break

if(len(n) != 0):
    print("".join(n))
else:
    print("No fruit is left over")
    