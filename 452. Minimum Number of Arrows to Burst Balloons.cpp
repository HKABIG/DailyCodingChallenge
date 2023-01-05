class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int lp = points[0][1];
        int ans = 1;
        for(auto p:points){
            if(p[0]>lp){
                ans++;
                lp = p[1];
            }
            lp = min(lp,p[1]);
        }
        return ans;
    }
};