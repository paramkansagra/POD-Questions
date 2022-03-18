day = ["Sunday","Monday","Tuesday","Wednesday","Thrusday","Friday","Saturday"]
n = int(input())
m = int(input())
k = int(input())
print(day[(((k-n)%7)+m)%7])