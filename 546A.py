k,n,w = tuple(map(int, input().split()))
cost = (w*(w+1)//2)*k - n
if cost <= 0:
    print("0")
else:
    print(cost)