#User function Template for python3
from math import gcd
from math import ceil
from collections import Counter
class Solution:
    def countPairs (self, n, arr, k):
        # code here
        c = 0
        l = []
        for i in arr:
            l.append(i%k)
        d = Counter(l)
        #print(d)
        for k,v in d.items():
            c+=(v*(v-1))//2
        return c
        

