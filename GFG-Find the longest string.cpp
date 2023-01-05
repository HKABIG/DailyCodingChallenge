class Solution
{
public:
    string longestString(vector<string> &words)
    {
        sort(words.begin(),words.end(),[](string& a,string& b){
            return a.size()!=b.size()?a.size()<b.size():a<b;
        });
        unordered_set<string> seen;
        string res = "";
        for(auto& word:words){
            if(word.size()==1 || (seen.count(word.substr(0,word.size()-1)))){
                seen.insert(word);
                if(res.size()<word.size()){
                    res = word;
                }
            }
        }
        return res;
    }
};