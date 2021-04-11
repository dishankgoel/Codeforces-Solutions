for _ in range(int(input())):
    n = int(input())
    s = input()
    found = 0
    while(int(s[-1])%2 == 0):
        s = s[:-1]
        if(s == ''):
            print(-1)
            break
    if(s==''):
        continue
    su = sum([int(i) for i in s])
    if(su%2 == 0):
        print(s)
    else:
        for i in range(len(s)):
            if(int(s[i])%2 == 1):
                s = s[:i] + s[i+1:]
                if(s==''):
                    print(-1)
                    found = 1
                    break
                else:
                    while(s[0] == '0'):
                        s = s[1:]
                    print(s)
                    found = 1
                    break
        if(found == 0):
            print(-1)

