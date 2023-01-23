class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,int> mp;
        unordered_map<int,int> mt;
        for(auto i:trust){
            mp[i[0]]++;
            mt[i[1]]++;
        }
        for(int i=1;i<n+1;i++){
            if(mt[i]==n-1 and mp[i]==0){
                return i;
            }
        }
        return -1;
    }
};