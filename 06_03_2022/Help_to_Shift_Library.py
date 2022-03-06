n = int(input())
ramu = 0
somu = 0
trips = 0
last = ""

while(True):
    if(ramu + somu >= n):
        break
    else:
        trips += 1
        if(trips%2 != 0):
            ramu += trips
            if(ramu + somu > n):
                ramu -= (ramu + somu -n)
                last = "Ramu"
                break
            somu += 2*trips
            if(ramu + somu > n):
                somu -= (somu + ramu - n)
                last = "Somu"
                break
        else:
            ramu += 2*trips
            if(ramu + somu > n):
                ramu -= (somu + ramu - n)
                last = "Ramu"
                break
            somu += trips
            if(ramu + somu > n):
                somu -= (ramu + somu - n)
                last = "Somu"
                break
print(trips)
print(ramu,somu,sep="\t")
print(last)