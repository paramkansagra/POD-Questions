n = input()
count = 0
for i in range(len(n)):
    if(n[-1] == '0'):
        count += 1
    x = n[-1] + n[:len(n)-1]
    n = x
print(count)