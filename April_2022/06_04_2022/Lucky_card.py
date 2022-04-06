n = int(input())
m = int(input())
data = [input().split() for i in range(n)]
pattern = input()

final = []
for i in data:
    present = True
    for j in pattern:
        if(j not in i):
            present = False
            break
    if(present):
        final = i
        break
    
for i in range(m):
    x = [data[j][i] for j in range(n)]
    present = True
    for j in pattern:
        if(j not in x):
            present = False
            break
    if(present):
        final = x
        break

if(len(final) != 0):
    print("".join(sorted(final)))
    print("Lucky Player")
else:
    print("Unlucky Player")