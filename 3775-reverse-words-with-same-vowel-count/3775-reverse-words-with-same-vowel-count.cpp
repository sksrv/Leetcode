class Solution {
public:
    int vowelCount(string word) {    //return No. of vowels in string
        int cnt = 0;
        for (int i = 0; i < word.size(); i++) {
            if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' ||
                word[i] == 'o' || word[i] == 'u') {
                    cnt++;
            }
        }
        return cnt;
    }
    string reverseWords(string s) {
    //    unordered_set<int> st;
        string word;
        string result;
        stringstream ss(s);
        bool first = true;
        int firstVowelCount = -1;

        while (ss >> word) {
            int cnt = vowelCount(word);

            if(cnt == firstVowelCount){
                string rev = word;
                reverse(rev.begin(),rev.end());
                result += rev;
            }
            else{
                result += word;
            }
            result += " ";

            if (first){                 // store first vowel count 
                firstVowelCount = cnt;
                first = false;
            }
        }
        result.pop_back();
        return result;
    }
};