class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string s, int n)
    {
        // your code here
        string low = "";
        string upp = "";
        string res = "";
        vector<int> dp(n);
        for(int i=0;i<n;i++){
            if(s[i]>='a' && s[i]<='z'){
                upp += s[i];
                dp[i] = 0;
            }
            else{
                low += s[i];
                dp[i] = -1;
            }
        }
        sort(low.begin(),low.end());
        sort(upp.begin(),upp.end());
        int i=0,j=0;
        for(int k=0;k<n;k++){
            if(dp[k]==-1){
                res += low[i];
                i++;
            }
            if(dp[k]==0){
                res += upp[j];
                j++;
            }
        }
        return res;
    }
};