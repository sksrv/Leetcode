class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";

        string ans = "";
        string first = strs[0];
        int n = first.size();
        int i = 0;
        while (i < n) {
            char c = first[i];
            for (int k = 1; k < strs.size(); k++) {
                if (i >= strs[k].size() || strs[k][i] != c) {
                    return ans;
                }
            }
            ans += c;
            i++;
        }
        return ans;
    }
};