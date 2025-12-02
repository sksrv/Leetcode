class Solution {
public:
    int minimizedStringLength(string s) {
        
        vector<bool> seen(26,false);
        
        for (char c : s) {
            seen[c - 'a'] = true;
        }
        
        int distinct = 0;
        for (int i = 0; i < 26; i++) {
            if (seen[i]) distinct++;
        }
        
        return distinct;
    }
};
