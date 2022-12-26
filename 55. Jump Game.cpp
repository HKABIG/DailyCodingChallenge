class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int mxi = 0;
        for(int i=0;i<n;i++){
            mxi = max(mxi,nums[i]+i);
            if(mxi<i+1) break;
        }
        return mxi >= n-1;
    }
};