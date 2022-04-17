n = int(input())
current = list(map(int,input().split()))
desired = list(map(int,input().split()))
count = 0
for i in range(n):
    if(current[i] == desired[i]):
        continue
    else:
        x = current.index(desired[i])
        current[i],current[x] = current[x],current[i]
        count += 1
print(count)