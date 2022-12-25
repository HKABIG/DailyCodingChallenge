class Solution():
    def solve(self, N, k, GeekNum):
        #your code goes here
        n = len(GeekNum)
        l = []
        for i in range(n-1,N):
            #if (i+1)-k>=0 and (i+1)-k<n:
            GeekNum.append(sum(GeekNum[(i+1)-k:i+1]))
            #print((i+1)-k)
        #print(GeekNum)
        return GeekNum[N-1]