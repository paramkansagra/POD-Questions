def number(n1,k):
    num1 = 0
    for i in range(len(n1)):
        num1 += n1[i]*(k**i)
    return num1
    
def convert(x,k):
    lol = []
    while(x != 0):
        lol.append(str(x%k))
        x = int(x//k)
    print(",".join(lol))

n1 = list(map(int,input().split(',')))
n2 = list(map(int,input().split(',')))
k = int(input())

num1 = number(n1,k)
num2 = number(n2,k)

convert(num1+num2,k)