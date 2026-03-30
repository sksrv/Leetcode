class Solution {
public:
    int countAsterisks(string s) {
        int count = 0;
        bool insideBars = false;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '|') {
                insideBars = !insideBars; // toggle
            } 
            else if (s[i] == '*' && !insideBars) {
                count++;
            }
        }

        return count;
    }
};