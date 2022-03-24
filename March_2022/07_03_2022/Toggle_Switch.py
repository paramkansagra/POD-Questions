n = int(input())
m = int(input())
x = False
for i in range(1,m+1):
    if(m%i == 0):
        if(x == False):
            x = True
        else:
            x = False

if(x == False):
    print("Off")
else:
    print("On")