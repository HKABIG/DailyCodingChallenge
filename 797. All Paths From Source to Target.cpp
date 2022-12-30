class Solution {
public:
    // const int N = 1e5+7;
    // vector<int> adjl[N];
    vector<vector<int>> path;
    void DFS(int s,vector<vector<int>>& graph){
        vector<bool> vis(graph.size(),false);
        vector<int> a;
        a.push_back(0);
        stack<int> st;
        st.push(s);
        while(!st.empty()){
            int n = st.top();
            st.pop();
            if(!vis[n]){
                vis[n] = true;
                a.push_back(n);
            }
            if(n==graph.size()-1){
                path.push_back(a);
            }
            for(auto it:graph[n]){
                if(!vis[it]){
                    st.push(it);
                }
            }
        }
}
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();
        for(int i=0;i<graph[0].size();i++){
            DFS(graph[0][i],graph);
            cout<<endl;
        }
        return path;
    }
};