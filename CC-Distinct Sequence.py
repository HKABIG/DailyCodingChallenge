# cook your dish here
for _ in range(int(input())):
    n = int(input())
    s = input()
    z = s.count("0")
    o = 2*n-z
    if z==0 or o==0:
        print(-1)
    else:
        a=[]
        for i in range(2*n):
            a.append([s[i],i])
        a.sort()
        f=[]
        for i in range(n):
            f.append(a[i][1]+1)
        print(*f)