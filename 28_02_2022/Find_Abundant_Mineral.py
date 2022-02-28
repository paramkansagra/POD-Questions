n = int(input())
data = ""
for i in range(n):
    data += input()

maxx = 0
st = ""
for i in data:
    count = 0
    for j in data:
        if(i == j):
            count += 1
    if(count > maxx):
        maxx = count
        st = i
print(st)