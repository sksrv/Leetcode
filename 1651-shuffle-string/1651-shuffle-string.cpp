class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<char> str(s.size());

        for(int i = 0; i < s.size(); i++){
            str[indices[i]] = s[i];
        }
        string ans(str.begin(),str.end());
        return ans;
    }
};