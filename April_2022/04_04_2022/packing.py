m_days = int(input())
m = list(map(int,input().split()))
n_days = int(input())
n = list(map(int,input().split()))

five = []
other = []

for i in m+n:
    if(i%5 == 0):
        five.append(i)
    else:
        other.append(i)

for i in sorted(five):
    print(i,end=" ")

print()

for i in sorted(other):
    print(i,end=" ")