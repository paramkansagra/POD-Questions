n=int(input())
sum1=0
sum2=0
for i in range(n,0,-1):
    if sum1<=sum2:
        sum1+=i
    else:
        sum2+=i
print(abs(sum1-sum2))