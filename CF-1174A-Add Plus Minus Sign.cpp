// Print all possible DFS paths for a acyclic graph

#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack<char> st;
        string res="";
        st.push(s[0]); 
        for(int i=1;i<n;i++){
            if(st.top()=='0' && s[i]=='0'){
                res += '+';
            }
            else if(st.top()=='0' && s[i] == '1'){
                res += '+';
                st.pop();
                st.push('1');
            }
            else if(st.top()=='1' && s[i] == '0'){
                res += '+';
            }
            else if(st.top()=='1' && s[i]=='1'){
                res+= '-';
                st.pop();
                st.push('0');
            }
        }
        cout<<res<<endl;
    }
}