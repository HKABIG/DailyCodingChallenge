class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>> adj(n);
        vector<int> dis(n,INT_MAX);
        for(auto e:flights){
            adj[e[0]].push_back({e[1],e[2]});
        }
        queue<pair<int,int>> q;
        q.push({src,0});
        int stop = 0;
        while(stop<=k && !q.empty()){
            int sz = q.size();
            while(sz--){
                auto [node,distance] = q.front();
                q.pop();
                for(auto& [neighbor,price]:adj[node]){
                    if(price+distance>=dis[neighbor]) continue;
                    dis[neighbor] = price+distance;
                    q.push({neighbor,dis[neighbor]});
                }
            }
            stop++;
        }
        return dis[dst]==INT_MAX ? -1 :dis[dst];
    }
};