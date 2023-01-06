class Solution{   
  public:
    void sieve(vector<int>& p){
        p[1] = 0;
        for(int i=2;i<=9999;i++){
            if(p[i]==1){
                for(int j=i*i;j<=9999;j+=i){
                    p[j] = 0;
                }
            }
        }
    }
    int shortestPath(int num1,int num2)
    {   
        // Complete this function using prime vector
        vector<int> prime(10000,1);
        sieve(prime);
        vector<int> ans(10000,-1);
        vector<bool> vis(10000);
        queue<int> q;
        q.push(num1);
        vis[num1]=false;
        ans[num1]=0;
        while(!q.empty()){
            int n = q.front();
            if(vis[n]) continue;
            q.pop();
            vis[n] = true;
            string s1 = to_string(n);
            for(int i=0;i<4;i++){
            for(char ch='0';ch<='9';ch++){
                if ( (ch=='0'&&i==0) || ch==s1[i])
                    continue;
                string s2 = s1.substr(0,i) + ch + s1.substr(i+1);
                int s3 = stoi(s2);
                if(prime[s3]==true && ans[s3]==-1){
                    ans[s3] = 1+ans[n];
                    q.push(s3);
                }
            }
        }
        }
        return ans[num2];
    }
};
