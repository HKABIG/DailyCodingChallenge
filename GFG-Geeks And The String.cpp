class Solution {
  public:
    string removePair(string s) {
        // code here
        stack<char> st;
        string ans;
        for(int i=0;i<s.length();i++){
            if(st.empty()){
                st.push(s[i]);
                continue;
            }
            if(st.top()==s[i]){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        if(st.empty()){
            return "-1";
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
