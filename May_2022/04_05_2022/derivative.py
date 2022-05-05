from re import L

from numpy import true_divide


s = input()
w = input()

def check_level0(s1,s2):
    return s1 in s2

def check_level1(s1,s2):
    for i in range(len(s1)-1):
        for j in range(i+1,len(s1)):
            if s1[i] in s2 and s1[j] in s2:
                if s2.find(s1[i])>s2.find(s1[i]):
                    return False
            else:
                return True

def no_existance(s1,s2):
    if(len(s1)>len(s2)):
        return True
    for char in s1:
        if char in s2:
            return False
    return True

def calc_derivative(s1,s2):
    ps = []
    pa = []
    for i in range(len(s1)):
        ps.append(i+1)
        pa.append(s2.find(s1[i])+1)
    
    derivative_index = 0
    for i in zip(pa,ps):
        derivative_index += (i[0]-i[1])
    return derivative_index

def final_check(s1,s2):
    if(check_level0(s1,s2)):
        print(0,0,sep='\n')
    elif(check_level1(s1,s2)):
        print(1,0,sep="\n")
    elif(no_existance(s1,s2)):
        print(-1)
    else:
        print(2)
        a = calc_derivative(s1,s2)
        diff = abs(a-len(s1))
        a -= diff
        print(a)
    
final_check(s,w)
final_check(w,s)