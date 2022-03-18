side = input()
n = int(input())
m = int(input())
thickness = float(input())
if(side == 'l'):
    print("{:.2f}".format((max(n,m)-min(n,m)-1)*thickness))
else:
    print("{:.2f}".format((max(n,m)-min(n,m)+1)*thickness))