long long maxArea(long long A[], int len)
{
    // Your code goes here
    int i = 0;
    int j = len-1;
    int ans = 0;
    while(i<j){
        int h = A[i];
        int w = A[j];
        ans = max(ans,(j-i)*min(h,w));
        if(A[i]<A[j]) i++;
        else j--;
    }
    return ans;
}