class Solution {
public:
    string sortVowels(string s) {
        vector<char> ch;
        for (int i = 0; i < s.size(); i++) {
            if ((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') ||
                (s[i] == 'o') || (s[i] == 'u') || (s[i] == 'A') ||
                (s[i] == 'E') || (s[i] == 'I') || (s[i] == 'O') ||
                (s[i] == 'U')) {
                ch.push_back(s[i]);
            }
        }
        sort(ch.begin(), ch.end());
        int j = 0;
        for (int i = 0; i < s.size(); i++) {
            if ((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') ||
                (s[i] == 'o') || (s[i] == 'u') || (s[i] == 'A') ||
                (s[i] == 'E') || (s[i] == 'I') || (s[i] == 'O') ||
                (s[i] == 'U')) {

                s[i] = ch[j];
                j++;
            }
        }
    
    return s;
}
};