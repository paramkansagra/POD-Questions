n = int(input())
m = int(input())

n = str(bin(n))[2:]
m = str(bin(m))[2:]

if(len(n) != 32):
    n = "0"*(32-len(n))+n
if(len(m) != 32):
    m = "0"*(32-(len(m))) + m

n = n[::-1]
m = m[::-1]

print(n)
print(m)

data = []
for i in range(32):
    if(n[i] == m[i]):
        data.append(i+1)
print(*data)