class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int ar) {
        vector<int> diff;
        int n = capacity.size();
        for(int i=0;i<n;i++){
            diff.push_back(capacity[i]-rocks[i]);
        }
        sort(diff.begin(),diff.end());
        int j=0;
        int c=0;
        while(ar>0 and j<n){
            if(ar<diff[j]){
                break;
            }
            ar-=diff[j];
            j++;
            c++;
        }
        for(auto it:diff){
            cout<<it<<" ";
        }
        return c;
    }
};