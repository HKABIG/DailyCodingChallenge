
class Solution{
public:
    void merge(vector<int>& v, int left,int mid, int right, long long& inversions)
{
    vector<int> temp(right - left + 1);
 
    int i = left;
    int j = mid + 1;
    int k = 0;
    int cnt = 0;
 
    while (i <= mid && j <= right) {
        if (v[i] <= v[j]) {
            temp[k++] = v[i++];
        }
        else {
            // Counting inversions
            inversions += (mid - i + 1);
 
            temp[k++] = v[j++];
        }
    }
 
    while (i <= mid)
        temp[k++] = v[i++];
 
    while (j <= right)
        temp[k++] = v[j++];
 
    k = 0;
    for (int a = left; a <= right; a++) {
        v[a] = temp[k++];
    }
}
    void mergeSort(vector<int>& v, int left,int right, long long& inversions){
        if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(v, left, mid, inversions);
        mergeSort(v, mid + 1, right, inversions);
        merge(v, left, mid, right, inversions);
    }
    }
    long long CountInversions(vector<int>& v){
        int n = v.size();
        long long  inversions = 0;
        mergeSort(v,0,n-1,inversions);
        return inversions;
    }
  long long countSubstring(string S){
      int n = S.length();
      vector<int> nums(n);
      for(int i=0;i<n;i++){
          nums[i] = S[i]-'0';
          if(nums[i]==0)
            nums[i] = -1;
      }
      vector<int> pref(n);
      int sum = 0;
      for(int i=0;i<n;i++){
          sum += nums[i];
          pref[i] = sum;
      }
      int cnt = 0;
      for(int i=0;i<n;i++){
          if(pref[i]>0)
            cnt++;
      }
      reverse(pref.begin(),pref.end());
      long long inversions = CountInversions(pref);
      long long ans = cnt+inversions;
      return ans;
  }
};