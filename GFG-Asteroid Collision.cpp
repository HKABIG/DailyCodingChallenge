class Solution {
  public:
    vector<int> asteroidCollision(int n, vector<int> &a) {
        // code here
        stack<int> st;
        vector<int> ans;
        int i=0;
        while(i<n){
            if(st.empty()){
                st.push(a[i]);
                i++;
            }
            else{
                if((a[i]>0 && st.top()>0) || (a[i]<0 && st.top()<0) || a[i]>0 && st.top()<0){
                    st.push(a[i]);
                    i++;
                }
                else if(a[i]<0 && st.top()>0){
                    int as = st.top();
                    st.pop();
                    if(as==abs(a[i]))
                        i++;
                    else if(as>abs(a[i])){
                        st.push(as);
                        i++;
                    }
                    else if(as<abs(a[i])){
                        continue;
                    }
                }
            }
        }
        while(!st.empty()){
            int res = st.top();
            st.pop();
            ans.push_back(res);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};