# -*- coding:utf-8 -*-
H, W = map(int, input().split())
a = []
for i in range(H):
    a.append(list(map(int, input().split())))

def kaisu(n):
    if n <= 5:
        ret = 0
    elif n <= 7:
        ret = 1
    elif n == 8:
        ret = 2
    else:
        ret = 3
    return ret

isPossible = False
ans = -1

if H == 1 and W == 1:
    if a[0][0] == 0:
        isPossible = True
        ans = 0
    elif a[0][0] == 5:
        isPossible = True
        ans = 1
elif H == 1:
    print(a)
    if all((x == 0 for x in a[0])):
            isPossible = True
            ans = 0            
    else:
        for i in range(W):
            if a[0][i] == 5:
                isPossible = True
                w1 = i
                break
        for i in range(W):
            if a[0][-(i+1)] == 5:
                w2 = W - i -1
                break
        print(w1, w2)
        if isPossible == True:
            if w1  == 0:
                m1 = 0
            else:
                m1 = max(a[0][0:(w1+1)])
            if w2 == 0:
                m2 = 0
            else:
                m2 = max(a[0][w2:W])
            kaisu1 = kaisu(min(m1, m2))
            kaisu2 = kaisu(max(a[0]))
            ans = kaisu1 + kaisu2 + 1

elif W == 1:
    b = []
    c = []
    for i in range (H):
        c.append(a[i][0])
    b.append(c)
    print(b)
    if all((x == 0 for x in b[0])):
            isPossible = True
            ans = 0            
    else:
        for i in range(H):
            if b[0][i] == 5:
                isPossible = True
                w1 = i
                break
        for i in range(H):
            if b[0][-(i+1)] == 5:
                w2 = H - i - 1
                break
        print(w1, w2)
        if isPossible == True:
            if w1  == 0:
                m1 = 0
            else:
                m1 = max(b[0][0:(w1+1)])
            if w2 == 0:
                m2 = 0
            else:
                m2 = max(b[0][w2:H])
            kaisu1 = kaisu(min(m1, m2))
            kaisu2 = kaisu(max(b[0]))
            ans = kaisu1 + kaisu2 + 1
else:
    d = []
    e = []
    for i in range(H):
        d.append(1)
    for i in range(H):
        e.append(max(a[i]))
        if all((x == 0 for x in a[i])):
            d[i] = 0
    if all((x == 0 for x in d)):
        isPossible = True
        ans = 0
    else:
        m3 = max(e)
        ans = kaisu(m3) +1
        for i in range(H):
            for j in range(W):
                if a[i][j] == 5:
                    isPossible = True


if isPossible == True:
    print('Yes', ans)
else:
    print('No')
