#define ll long long 
class Solution
{
  public:
  int maxWeightCell(int N, vector<int> Edge)
  {
      // code here
      vector<ll> weight(N);
      for(int i=0;i<N;i++){
          if(Edge[i]!=-1)
            weight[Edge[i]]+=i;
      }
      ll ans = -1;
      int index = -1;
      for(int i=0;i<N;i++){
          if(weight[i]>ans){
              ans = weight[i];
              index = i;
          }
      }
      return index;
  }
};