n = input().split()

def countVovels(n):
    x = "AEIOU"
    count = 0
    for i in n:
        if(i in x):
            count += 1
    return count

data = []
x = set()
for i in n:
    for j in i:
        for k in n:
            if(k != i and j in k):
                c1 = countVovels(i)
                c2 = countVovels(k)
                if(c1 == c2 and c1 == 2):
                    if(sorted([i,k]) not in data):
                        data.append(sorted([i,k]))

final = ""

for i in data:
    for j in i:
        count = 0
        for k in data:
            if(j in k):
                count += 1
        if(count == 3):
            final = j
print(final)