class Solution:
    def minimumRounds(self, tasks: List[int]) -> int:
        d = Counter(tasks)
        minround = 0
        for k,v in d.items():
            if v==1:
                return -1
            minround += (v+2)//3
        return minround