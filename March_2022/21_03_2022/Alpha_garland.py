n = input()
s = ""
for i in n:
    if(i.isalpha()):
        s += i
    else:
        reverse = True
        x = ""
        for j in range(int(i)):
            if(reverse):
                x += s[::-1]
                reverse = False
            else:
                x += s
                reverse = True
        s += x
print(s)