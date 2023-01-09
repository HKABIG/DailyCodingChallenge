class Solution {
  public:
    int solve(int N, vector<int> A) {
        // code here
        int ans = 0;
        bool f = false;
        for(int i=N-1;i>=0;i--){
            if(A[i]<9){
                ans = i+1;
                f = true;
                break;
            }
        }
        if(f){
            return ans;
        }
        else{
            return N;
        }
    }
};