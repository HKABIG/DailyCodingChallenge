class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_map<char,int> chars;
        int right = 0, left = 0,res = 0 ;
        while(right<n){
            char r = s[right];
            chars[r]++;
            while(chars[r]>1){
                char l = s[left];
                chars[l]--;
                left++;
            }
            res = max(res,right-left+1);
            right++;
        }
        return res;
    }
};