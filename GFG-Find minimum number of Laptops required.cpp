class Solution {
  public:
    int minLaptops(int N, int start[], int end[]) {
       // Code here
        int ans=1,j=0;
        sort(start,start+N);
        sort(end,end+N);
        for(int i=1;i<N;i++){
            if(end[j]<=start[i])++j;
            else ++ans;
        }
        return ans;
    }
};