// The Question is based on SJF(Shortest Job First) Algorithm

class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> nt;
        vector<array<int,3>> st;
        for(int i=0;i<tasks.size();i++){
            st.push_back({tasks[i][0],tasks[i][1],i});
        }
        sort(st.begin(),st.end());
        vector<int> tpo;
        long long ct = 0;
        int ti = 0;
        while(ti<tasks.size()||!nt.empty()){
            if(nt.empty() && ct<st[ti][0]){
                ct = st[ti][0];
            }
            while(ti<st.size() && ct >= st[ti][0]){
                nt.push({st[ti][1],st[ti][2]});
                ++ti;
            }
            auto [pt, index] = nt.top();
            nt.pop();
            ct += pt;
            tpo.push_back(index);
        }
        return tpo;
    }
};