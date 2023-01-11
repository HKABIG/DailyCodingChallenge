// User function Template for C++

class Solution {
  public:
    long long int minIncrements(vector<int> arr, int N) {
        // Code here
        unordered_map<int,int> mp;
        sort(arr.begin(),arr.end());
        int c = 0;
        for(int i=0;i<N;i++){
            int a = arr[i];
            mp[a]++;
            while(mp[arr[i]]>1){
                arr[i]+=1;
                mp[arr[i]]++;
                c+=1;
            }
        }
        return c;
    }
};