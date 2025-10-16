class Solution {
public:
    
    bool isCapital(string word) {
        for (char c : word) {
            if (!(c >= 'A' && c <= 'Z')) return false;
        }
        return true;
    }

    
    bool isSmall(string word) {
        for (char c : word) {
            if (!(c >= 'a' && c <= 'z')) return false;
        }
        return true;
    }

    bool detectCapitalUse(string word) {
        
        if (isCapital(word)) return true;

        
        if (isSmall(word)) return true;


        if (word[0] >= 'A' && word[0] <= 'Z') {
            string rest = word.substr(1);
            if (isSmall(rest)) return true;
        }


        return false;
    }
};
