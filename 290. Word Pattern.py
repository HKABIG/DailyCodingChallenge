class Solution(object):
    def wordPattern(self, pattern, s):
        s = s.split()
        if len(s)!=len(pattern):
            return False
        return len(set(zip(pattern,s))) == len(set(s)) and len(set(pattern)) == len(set(s))