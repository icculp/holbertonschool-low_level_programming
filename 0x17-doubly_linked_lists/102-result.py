#!/usr/bin/python3
def fun():
    n = 0
    for i in range(100, 1000):
        for j in range(100, 1000):
            k = i * j
            l = str(k)
            m = l[::-1]
            if (l == m):
                if (k > n):
                    n = k
    return n
o = fun()
print(o)
#i = 911
#j = 999
#k = i * j

#print(k)
#print(str(k))
#l = str(k)
#print(l)
#print(l[::-1])
