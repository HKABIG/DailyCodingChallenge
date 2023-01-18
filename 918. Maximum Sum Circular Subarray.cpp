class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int mxs = INT_MIN;
        int cmx = 0;
        int mns = INT_MAX;
        int cmn = 0;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += nums[i];
            cmx += nums[i];
            mxs = mxs<cmx?cmx:mxs;
            cmx = cmx<0?0:cmx;
            cmn += nums[i];
            mns = mns>cmn?cmn:mns;
            cmn = cmn>0?0:cmn;

        }
        if(sum==mns){
            return mxs;
        }
        return max(mxs,sum-mns);
    }
};