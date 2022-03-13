letter = input()
h = int(input())
m = int(input())

data = []
for i in range(12):
    x = ord(letter)+i*2
    if(x>90):
        x -=25
    data.append(chr(x))

if(h>=12):
    h -= 12

x = ""
y = ""

if(m == 0):
    x = "On "+data[h-1]
    y = "On "+data[-1]

elif(m != 0 and m%5 == 0):
    x = "Between "+data[h-1]+" and "+data[h]
    y = "On "+data[m//5-1]

else:
    x = "Between "+data[h-1]+" and "+data[h]
    y = "Between "+data[m//5-1] + " and "+data[m//5]
print(x)
print(y)
