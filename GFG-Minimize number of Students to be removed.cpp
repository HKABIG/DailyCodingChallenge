//Subtracting total number of students with the number of students who can see
class Solution {
  public:
    int removeStudents(int H[], int n) {
        // code here
        vector<int> arr;
        for(int i=0;i<n;i++){
            int it = lower_bound(arr.begin(),arr.end(),H[i])-arr.begin();
            if(it==arr.size()){
                arr.push_back(H[i]);
            }
            else
                arr[it]=H[i];
        }
        return n-arr.size();
    }
};