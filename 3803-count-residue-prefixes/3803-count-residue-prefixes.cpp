class Solution {
public:
    int residuePrefixes(string s) {
        unordered_set<char> seen;
        int count = 0;
        
        for (int i = 0; i < s.size(); i++) {
            seen.insert(s[i]);
            if (seen.size() == (i + 1) % 3) {
                count++;
            }
        }
        
        return count;
    }
};
