from bisect import bisect_left 
  
def BinarySearch(a, x): 
    i = bisect_left(a, x) 
    if i != len(a) and a[i] == x: 
        return i 
    else: 
        return -1


for _ in range(int(input())):
    d = {}
    g = []
    ov = []
    n = int(input())
    for i in range(n):
        l = list(map(int, input().split()))
        if(l[0] != 0):
            g.append(l[1])
        else:
            g.append(-1)
        ov.append(l)
    left = []
    for i in range(n):
        if(g[i] == -1):
            left.append(i)
        else:
            if(d.get(g[i], -2) == -2):
                d[g[i]] = 1
            else:
                left.append(i)
    to_give = []
    for i in range(1, n+1):
        if(d.get(i, -1) == -1):
            to_give.append(i)

    found = 0
    index = 0
    for i in range(len(to_give)):
        for k in range(len(left)):
            if(len(ov[left[k]]) == 1):
                index = left[k]+1
                found = to_give[i]
                break
            if(BinarySearch(ov[left[k]][1:], to_give[i]) == -1):
                index = left[k]+1
                found = to_give[i]
                break
    if(index == 0):
        print("OPTIMAL")
    else:
        print("IMPROVE\n{} {}".format(index, found))







