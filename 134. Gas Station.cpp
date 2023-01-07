class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = cost.size();
        int curr_gas = 0;
        int ans = 0;
        int total_gas=0,total_cost=0;
        int low_index = INT_MAX;
        for(int i=0;i<n;i++){
            total_gas+=gas[i];
            total_cost+=cost[i];
            curr_gas += gas[i]-cost[i];
            if(curr_gas<0){
                ans = i+1;
                curr_gas = 0;
            }
        }
        return (total_gas<total_cost)?-1:ans;
    }
};