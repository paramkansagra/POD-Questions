roman = {'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
m = ['I','V',"X",'L','C','D','M']
s = input()[::-1]
stack = []
last_index = 0

for i in s:
    if(m.index(i)<last_index):
        stack[-1] = stack[-1]-roman[i]
    else:
        last_index = m.index(i)
        stack.append(roman[i])

if "VV" in s or 'LL' in s or "MM" in s or len(set(s[1:min(4,len(s))])) == 1:
    print("Invalid") ; exit(0)

print(sum(stack))