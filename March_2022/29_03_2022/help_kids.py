n = int(input())
data = [input().lower() for i in range(n)]
total = 0
pos = 0
for i in data:
    start = min(ord(i[0]),ord(i[-1]))
    end = max(ord(i[0]),ord(i[-1]))
    count = 1
    for j in i:
        if(ord(j) not in range(start,end+1)):
            count += 1
    total += abs(pos-count)
    if(pos == count):
        print("n","0",sep="\t")
    elif(pos>count):
        print("b",pos-count,sep="\t")
    else:
        print("f",count-pos,sep="\t")
    pos = count
print(total)