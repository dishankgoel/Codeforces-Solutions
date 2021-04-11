n,r = tuple(map(int, input().split()))
pos,neg = [],[]


def cmp(t):
    return t[0] + t[1]


for i in range(n):
    a,b = tuple(map(int, input().split()))
    if(b < 0):
        if(-b > a):
            neg.append((-b,b))
        else:
            neg.append((a,b))
    else:
        pos.append((a,b))

pos.sort()
neg.sort(reverse=True, key=cmp)

taken = 0

for i in range(len(pos)):
    if((r >= pos[i][0])):
        r += pos[i][1]
        taken += 1
if(taken != len(pos)):
    print("LOSE")
else:
    for i in range(len(neg)):
        if(r >= neg[i][0]):
            r += neg[i][1]
            taken += 1
    if(taken != n):
        print("LOSE")
    else:
        print("WIN")
    
