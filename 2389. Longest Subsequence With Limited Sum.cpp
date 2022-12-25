class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        vector<int> v;
        for(int i=1;i<nums.size();i++){
            nums[i] = nums[i] + nums[i-1];
        }
        for(int i=0;i<queries.size();i++){
            int j = 0;
            while(j<nums.size() && queries[i]>=nums[j]){
                j++;
            }
            v.push_back(j);
        }
        return v;
    }
};