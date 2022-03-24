a = input().lower()
n = int(input())
data = [input() for i in range(n)]
interest = []
for i in data:
    flag = True
    for j in i:
        x = j.lower()
        if(x not in a):
            flag = False
            break
    if(flag):
        interest.append(i)
if(len(interest) != 0):
    for i in interest:
        print(i)
else:
    print("No such book")