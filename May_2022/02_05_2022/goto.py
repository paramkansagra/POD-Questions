n = int(input())
deadline = [list(map(int,input().split())) for i in range(n)]
m = int(input())
worked = [list(map(int,input().split())) for i in range(m)]

half = 0
if(n%2 == 0):
    half = n/2
else:
    half = (n+1)/2

final = 0

for i in deadline:
    flag = True
    count = 0
    for j in worked:
        if(j[0]<=i[0]):
            count += j[1]
    if(count>=i[1]):
        final += 1

if(final>=half):
    print("Allowed")
else:
    print("Denied")