m = int(input())
n = int(input())
last_ele = 2**m - 1
x = 2**m
packets = 0
for i in range(n,-1,-1):
    l = (x/last_ele)*i
    if(int(l) == l):
        packets = i
        break
give = (x/last_ele)*packets
print(packets)
print(int(give))