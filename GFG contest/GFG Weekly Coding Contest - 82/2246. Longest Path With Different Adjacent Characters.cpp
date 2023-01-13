class Solution {
public:
    int dis[100005];
    int ans = 1;
    void dfs(int src,string &s,vector<vector<int>>& adj){
        dis[src] = 1;
        for(auto node:adj[src]){
            dfs(node,s,adj);
            if(s[node]!=s[src]){
                ans = max(ans,dis[src]+dis[node]);
                dis[src] = max(dis[src],dis[node]+1);
            }
        }
    }
    int longestPath(vector<int>& parent, string s) {
        int n = parent.size();
        vector<vector<int>> adj(n);
        for(int i=1;i<n;i++){
            adj[parent[i]].push_back(i);
        }
        dfs(0,s,adj);
        return ans;
    }
};