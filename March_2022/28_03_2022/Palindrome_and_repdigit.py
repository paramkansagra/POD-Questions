def isrep(n):
    n = str(n)
    for i in range(len(n)-1):
        if(n[i] != n[i+1]):
            return False
    return True

start = int(input())
end = int(input())
start_cube = int(start**(1/3))
end_cube = int(end**(1/3))

for i in range(10,end_cube+1):
    if(str(i**3) != str(i**3)[::-1]):
        if(isrep(i)):
            print(i**3,i,sep="\t")