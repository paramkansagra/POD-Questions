from itertools import combinations

x = int(input())
n = int(input())
l = list(map(int, input().split()))

combo = list(sorted(list(filter(lambda k : sum(k) == x, list(combinations(l, 4))))))
if not combo:
    print("No")
else:
    combo = combo[0]
    for i in combo:
        j = l.index(i)
        print(j+1, end=" ")
        l[j] = 0