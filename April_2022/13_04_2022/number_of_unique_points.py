from collections import Counter
n= int(input())
data = list(Counter(list(map(int,input().split()))))
print(len(data)**2)
print(*data)