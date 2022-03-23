# code provided by khushali chuhan

def formstring(x):
    s=''
    while x>0:
        r=x%3
        if r==0: s='r'+s
        elif r==1: s='g'+s
        elif r==2: s='b'+s
        x=x//3
    return(s)
n=int(input())
s=list(formstring(n))
f=[s[::]]
d={'r':0,'g':1,'b':2}
r={'r':'g','g':'b','b':'r'}
for i in range(len(s)-1,-1,-1):
    if s[i]=='r' or s[i]=='g':
        s[i]=r[s[i]]
        break
f.append(s)
s=f[0][::-1]
for i in range(len(s)-1):
    if ((s[i]=='g' and s[i+1]=='r')):
        s[i],s[i+1]=s[i+1],s[i]
        f.append(s[::-1])
        break
    elif (s[i]=='b' and s[i+1]=='g'):
        s[i]='r'
        s[i+1]='b'
        f.append(s[::-1])
        break
    elif (s[i]=='b' and s[i+1]=='r'):
        s[i]='r'
        s[i+1]='g'
        f.append(s[::-1])
        break
    elif (s[i]=='r' and s[i+1]=='r'):
        s[i]='g'
        s[i+1]='g'
        f.append(s[::-1])
        break
    elif (s[i]=='r' and s[i+1]=='g'):
        s[i]='g'
        s[i+1]='b'
        f.append(s[::-1])
        break
    elif (s[i]=='g' and s[i+1]=='g'):
        s[i]='r'
        s[i+1]='b'
        f.append(s[::-1])
        break
y=[]
for i in range(1,len(f)):
    x=''
    for j in f[i]:
        x+=str(d[j])
    y.append(str(int(x,3)))
print('\t'.join(y))
for i in f:
    print('r'*(20-len(i))+''.join(i))