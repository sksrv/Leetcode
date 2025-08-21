class Solution {
public:
    string clearDigits(string s) {
        string st;
        for (char c : s) {
            if (isdigit(c)) {
                if (!st.empty()) st.pop_back(); // remove closest left letter
            } else {
                st.push_back(c); // keep letter
            }
        }
        return st;
    }
};
