n = int(input())
data = sorted(list(map(int,input().split())))
i = 0
j = n-1
new = []
x = 0
while(i<n//2 and j>=n//2):
    x += abs(data[i]-data[j])
    new += [data[i],data[j]]
    i += 1
    j -= 1

print(*new)
print(x)
