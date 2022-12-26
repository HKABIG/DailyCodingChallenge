#Dynamic programming using HashMap is used

for _ in range(int(input())):
    n,k = map(int,input().split())
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))
    d = dict()
    if len(set(a))<k:
        print(-1)
        continue
    for i in range(len(a)):
        d[a[i]] = b[i]
    for i in range(len(a)):
        d[a[i]] = min(b[i],d[a[i]])
    c = 0
    l = 0
    for i in sorted(d.values()):
        if l<k:
            c += i
        l+=1 
    print(c)
        