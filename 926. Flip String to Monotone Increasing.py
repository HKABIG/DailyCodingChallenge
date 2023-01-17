class Solution:
    def minFlipsMonoIncr(self, s: str) -> int:
        if len(set(s))==1:
            return 0
        oc = 0
        zc = 0
        for i in range(len(s)):
            if s[i] == '1':
                oc+=1 
            else:
                zc+=1
                zc = min(zc,oc)
        return zc