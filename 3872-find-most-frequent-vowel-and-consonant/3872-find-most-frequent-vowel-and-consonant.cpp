class Solution {
public:
    int maxFreqSum(string s) {
        int vowelCount = 0;
        int consonantCount = 0;

        for (int i = 0; i < s.size(); i++) {
            int vCount = 0;
            int conCount = 0;
            char ch = s[i];
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                for (int j = i; j < s.size(); j++) {
                    if (ch == s[j]) {
                        vCount++;
                    }
                }
            } else {
                for (int j = i; j < s.size(); j++) {
                    if (ch == s[j]) {
                        conCount++;
                    }
                }
            }
            vowelCount = max(vowelCount,vCount);
            consonantCount = max(consonantCount,conCount);
        }
        return vowelCount + consonantCount;
    }
};