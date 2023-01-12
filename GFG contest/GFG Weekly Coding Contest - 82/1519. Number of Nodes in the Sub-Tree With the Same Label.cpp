class Solution {
public:
    vector<int> dfs(vector<vector<int>>& adj,string &labels,int i,vector<int>& ans){
        vector<int> res(26,0);
        ans[i] = 1;
        res[labels[i]-'a'] = 1;
        for(auto child:adj[i]){
            if(!ans[child]){
                vector<int> countadj = dfs(adj,labels,child,ans);
                for(int k=0;k<26;k++) res[k] += countadj[k];
            }
        }
        ans[i] = res[labels[i]-'a'];
        return res;
    }
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        vector<vector<int>> adj(n);
        vector<int> ans(n,0);
        for(auto edge:edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        dfs(adj,labels,0,ans);
        return ans;
    }
};