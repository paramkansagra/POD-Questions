p=int(input())
s=int(input())
x=1
days=int(input())
w=0
while x<=days:
    if (x+2)<=days:
        p+=s
        w+=(p-s)
    else:
        w+=p
    x+=2
print(p)
print(w)