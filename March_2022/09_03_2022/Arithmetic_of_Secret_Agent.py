a = input()
b = input()
final = ""
carry = 0
leftover = ""

if(len(a) != len(b)):
    if(len(a)>len(b)):
        leftover = a[:len(a)-len(b):]
        a = a[len(a)-len(b)::]
    else:
        leftover = b[:len(b)-len(a):]
        b = b[len(b)-len(a)::]

for i in range(len(a)-1,-1,-1):
    x = (ord(a[i])+ord(b[i])+carry)%10
    carry = (ord(a[i])+ord(b[i])+carry)//10
    final += chr(x+ord('a'))

for i in leftover[::-1]:
    x = (ord(i)+carry)%10
    carry = (ord(i)+carry)//10
    final += chr(x+ord('a'))

if(carry>25):
    carry -= 26
final += chr(carry+ord('a'))

print(final[::-1])