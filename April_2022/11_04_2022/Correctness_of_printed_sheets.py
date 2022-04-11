n = int(input())
data = list(map(int,input().split()))
if(data == sorted(data)):
    print("Correct")
else:
    flag = False
    m = 0
    for i in range(n):
        data.append(data.pop(0))
        if(data == sorted(data)):
            flag = True
            m = i+1

    if(flag):
        print("Easily correctable")
        print(m)
    else:
        print("Not easily correctable")