a = int(input())
b = int(input())

for i in range(a,b+1):
    for j in range(i,b+1):
        for k in range(j,b+1):
            x = k**2-i**2-j**2

            if(x == 0):
                print(i,j,k,"Exactly Pythagorean")
            elif(abs(x) == 1):
                print(i,j,k,"Very Close to Pythagorean")
            elif(abs(x) == 2):
                print(i,j,k,"Close to Pythagorean")