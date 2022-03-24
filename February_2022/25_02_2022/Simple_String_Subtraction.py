a = input()
b = input()

new = ""
new += a[:len(a)-len(b)]

back = ""
for i in range(len(b)):
    a1 = ord(a[i+len(a)-len(b)])
    a2 = ord(b[i])
    if(a1 == a2):
        back += a[i+len(a)-len(b)]
    elif(a1-a2>0):
        back += chr(a1-a2+96)
    else:
        back += chr(123 -abs(a1-a2))
new += back
print(new)