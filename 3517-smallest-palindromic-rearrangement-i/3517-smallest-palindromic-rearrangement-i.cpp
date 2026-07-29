class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> freq(26,0);

        for(char c : s){
            freq[c-'a']++;
        }

        string left = "";
        string mid = "";

        for(int i = 0;i<26;i++){
            left.append(freq[i]/2, i + 'a');

            if(freq[i] % 2 == 1){
                mid += (i + 'a');
            }
        }

        string right = left;
        reverse(right.begin(),right.end());

        return left + mid + right;


    }
};