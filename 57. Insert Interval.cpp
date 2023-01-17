class Solution {
public:
    vector<vector<int>> res;
    void mergeIntervals(vector<vector<int>>& intervals){
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());
        int index = 0;
        for(int i=1;i<n;i++){
            if(intervals[index][1]>=intervals[i][0]){
                intervals[index][1] = max(intervals[index][1],intervals[i][1]);
            }
            else{
                index = index + 1;
                intervals[index] = intervals[i];
            }
        }
        for(int i=0;i<index+1;i++){
            res.push_back(intervals[i]);
        }
    }
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        mergeIntervals(intervals);
        return res;
    }
};