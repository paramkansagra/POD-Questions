def isCorrect(n):
    vowels = 'aeiou'
    ptr = 0
    for i in range(len(n)):
        if(ptr==0):
            if n[i] in vowels:
                ptr=vowels.index(n[i])
        else:
            if n[i] in vowels:
                if vowels.index(n[i])<ptr:
                    return False
                else:
                    ptr=vowels.index(n[i])
    return True


def max_unique_vovels(words):
    vovels = 'aeiou'
    maxx = 0
    final = []
    for i in words:
        count = 0
        x = ''
        for j in i:
            if(j in vovels and j not in x):
                x += j
                count += 1
        if(count>maxx):
            final = [i]
            maxx = count
        elif(count == maxx):
            final.append(i)
    return final
n = input().split()
words = []

for i in n:
    if(isCorrect(i)):
        words.append(i)

maxx_unique = max_unique_vovels(words)
for i in maxx_unique:
    print(i)