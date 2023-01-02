class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        c = 0
        nc = 0
        if(ord(word[0])>=65 and ord(word[0])<=90):
            for i in range(1,len(word)):
                if ord(word[i])>=65 and ord(word[i])<=90:
                    c+=1
                else:
                    nc+=1
            if nc == len(word)-1 or c==len(word)-1:
                return True
            else:
                return False
        else:
            for i in range(len(word)):
                if ord(word[i])>=65 and ord(word[i])<=90:
                    return False
            return True