from collections import Counter
for _ in range(int(input())):
    n = int(input())
    l = list(map(int,input().split()))
    f = True
    if n%2==1:
        print("NO")
        continue
    d = Counter(l)
    for k,v in d.items():
        if v%2==1:
            print("NO")
            f=False
            break
    if f:
        print("YES")