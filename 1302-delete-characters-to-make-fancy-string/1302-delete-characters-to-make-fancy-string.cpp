class Solution {
public:
    string makeFancyString(string s) {
        string result;
        for (char c : s) {
            int n = result.size();
            // Only add if it won't form three consecutive identical chars
            if (n >= 2 && result[n-1] == c && result[n-2] == c) {
                continue;  // skip this char
            }
            result += c;  // safe to add
        }
        return result;
    }
};
