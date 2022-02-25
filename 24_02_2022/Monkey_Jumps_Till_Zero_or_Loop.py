n = int(input())
data = list(map(int,input().split()))

p=[1]
flag = True
while(flag):
    pos = p[-1]-1
    if(abs(data[pos]-data[pos+1]) == 0):
        break
    if(abs(data[pos]-data[pos+1]) not in p):
        p.append(abs(data[pos]-data[pos+1]))
    else:
        flag = False
        p.append(abs(data[pos]-data[pos+1]))
final = [str(data[i-1]) for i in p]
for i in final:
    print(i,end=" ")
print()
if(flag):
    print("Happy")
else:
    print("Angry")