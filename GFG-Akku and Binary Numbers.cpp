class Solution{
public:
    vector<long long int> v;
    void precompute()// Computing all the numbers with just three set bits with max 64 bit count
    {
        // Code Here
        for(int i=0;i<63;i++){
            for(int j=i+1;j<63;j++){
                for(int k=j+1;k<63;k++){
                    long long temp = pow(2,i) + pow(2,j) + pow(2,k);
                    v.push_back(temp);
                }
            }
        }
        sort(v.begin(),v.end());
    }
    
    long long solve(long long l, long long r){
        // Code Here
        return (upper_bound(v.begin(),v.end(),r)-lower_bound(v.begin(),v.end(),l));// upper limit and lower limit STL
    }
    
};
