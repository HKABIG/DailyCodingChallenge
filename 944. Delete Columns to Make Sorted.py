class Solution:
    def minDeletionSize(self, strs: List[str]) -> int:
        m = len(strs[0])
        c = 0
        for i in range(m):
            l = []
            for j in range(len(strs)):
                 l.append(strs[j][i])
            if sorted(l)!=l:
                #print(sorted(l),l)
                c+=1
        return c