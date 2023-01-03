//Subtracting total number of students with the number of students who can see
class Solution {
  public:
    int binary(int arr[],int low,int high,int key){
        while(low<high){
            int mid = (low+high)/2;
            if(arr[mid]<key)
                low = mid+1;
            else 
                high = mid;
        }
        return low;
    }
    int removeStudents(int h[], int n) {
        // code here
        int arr[n];
        arr[0] = h[0];
        int k = 1;
        for(int i=1;i<n;i++){
            if(h[i]>arr[k-1]){
                arr[k++] = h[i];
            }
            else{
                int index = binary(arr,0,k,h[i]);
                arr[index] = h[i];
            }
        }
        return n-k;
    }
};