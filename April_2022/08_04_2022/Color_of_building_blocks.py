n = int(input())
c = input().split()
m = int(input())
s = input()
flag = False
last_seen = {}

for i in c:
    last_seen[i] = []

for i in range(len(s)):
    last_seen[s[i]].append(i)

for j in last_seen:
    for k in range(len(last_seen[j])-1):
        if(abs(last_seen[j][k]-last_seen[j][k+1])<=m):
            flag = True

if(flag):
    print("Invalid")
else:
    print("Valid")