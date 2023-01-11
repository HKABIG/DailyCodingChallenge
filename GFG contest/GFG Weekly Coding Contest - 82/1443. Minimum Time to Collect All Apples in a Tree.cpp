class Solution {
public:
    int dfs(int node,int parent,vector<vector<int>>& adjl,vector<bool>& hasApple){
        int totalTime=0,childTime=0;
        for(auto child:adjl[node]){
            if(child==parent) continue;
            childTime = dfs(child,node,adjl,hasApple);

            if(childTime || hasApple[child]) totalTime += childTime + 2;
        }
        return totalTime;
    }
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<vector<int>> adjl(n);
        for(int i=0;i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adjl[u].push_back(v);
            adjl[v].push_back(u);
        }
        return dfs(0,-1,adjl,hasApple);
    }
};