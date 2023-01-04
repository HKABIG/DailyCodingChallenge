// User function Template for C++
class Solution {
  public:
    int maximum_profit(int n, vector<vector<int>> &intervals) {
        // Write your code here.
        sort(intervals.begin(),intervals.end());
        vector<int> dp(n);
        dp[0] = intervals[0][2];
        for(int i=1;i<n;i++){
            dp[i] = intervals[i][2];
            for(int j=i-1;j>=0;j--){
                if(intervals[j][1]<=intervals[i][0])
                    dp[i] = max(dp[i],dp[j]+intervals[i][2]);
            }
        }
        int ans = *max_element(dp.begin(),dp.end());
        return ans;
    }
};