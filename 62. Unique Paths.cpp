class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> v(m,vector<int>(n,0));
        v[0][0] = 1;
        int dr[] = {-1,1,0,0};
        int dc[] = {0,0,-1,1};
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(v[i][j]==0){
                    for(int k=0;k<3;k++){
                        int sr = dr[k] + i;
                        int sc = dc[k] + j;
                        if(sr<m && sr>=0 && sc<n && sc>=0){
                            v[i][j] += v[sr][sc];
                        }
                    }
                }
            }
        }
        return v[m-1][n-1];
    }
};