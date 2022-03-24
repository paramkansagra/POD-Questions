n = int(input())
m = int(input())
data = [list(map(int,input().split())) for i in range(n)]
maxx = 0
temp = []
for i in range(n):
    for j in range(m):
        if(j+1>=m or i+1>=n):
            break
        summ = data[i][j] + data[i+1][j] + data[i][j+1] + data[i+1][j+1]
        if(summ > maxx):
            maxx = summ
            temp = [[[i,j] , [i,j+1] , [i+1,j] , [i+1,j+1]]]
        elif(summ == maxx):
            temp.append([[i,j] , [i,j+1] , [i+1,j] , [i+1,j+1]])
print(maxx)
for i in temp:
    print(i[0][0]+1,i[0][1]+1,sep="\t")
    x = [data[j[0]][j[1]] for j in i]
    print("\t".join(list(map(str,x))))