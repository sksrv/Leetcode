class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<bool> ok(26, false);

        for (char c : allowed) {
            ok[c - 'a'] = true;
        }

        int count = 0;

        for (string &word : words) {
            bool valid = true;
            for (char c : word) {
                if (!ok[c - 'a']) {
                    valid = false;
                    break;
                }
            }
            if (valid) count++;
        }

        return count;
    }
};
