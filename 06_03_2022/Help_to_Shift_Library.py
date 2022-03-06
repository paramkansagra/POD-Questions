n = int(input())
ramu = 0
somu = 0
trips = 0
last_person = ""
for i in range(n):
    if(ramu + somu >= n):
        break
    trips += 1
    if(trips&1):
        ramu += trips
        if(ramu + somu > n):
            ramu -= (ramu + somu - n)
            last = "Ramu"
            break
        somu += trips * 2
        if(ramu + somu > n):
            somu -= (ramu + somu - n)
            last = "Somu"
            break
    else:
        ramu += trips * 2
        if(ramu + somu > n):
            ramu -= (ramu + somu - n)
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