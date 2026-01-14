class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int j;
        for (int k = 0; k <= s.size(); k++) {

            if (s[k] == ' ' || k == s.size()) {
                j = k - 1;

                while (i < j) {
                    swap(s[i], s[j]);
                    i++;
                    j--;
                }
                i = k + 1;
            }
        }
        return s;
    }
};