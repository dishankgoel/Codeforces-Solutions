t = int(input())
for _ in range(t):
    # int n; cin>>n;
    n = int(input())
    d = [int(i) for i in input().split()]
    # vector<ll> d(2*n); 
    # for(int i = 0; i < 2*n; i++) {
    #     cin>>d[i];
    # }
    # sort(d.begin(), d.end());
    d.sort()
    ans = 1
    actual = []
    # vector<ll> actual
    for i in range(0, 2*n, 2):
        if(d[i] != d[i + 1]):
            ans = 0
            break
        else:
            actual.append(d[i])
    a = [-1 for i in range(n)]
    # vector<ll> a(n, -1)
    su = 0
    if(len(actual) == n):
        for i in range(n - 1, -1, -1):
            p = actual[i] - 2*su
            if(p%(2*(i + 1)) != 0 or p <= 0):
                ans = 0
                break
            else:
                a[i] = p/(2*(i + 1))
            su += a[i]
        for i in range(1, n):
            if(a[i] <= a[i - 1]):
                ans = 0
                break
    if(ans):
        print("YES")
    else:
        print("NO")

