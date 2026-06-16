class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;

        for(char i : s){
            mp[i]++;
        }
        int count = 0;
        int odd = 0;

        for(auto i : mp){
            if(i.second % 2 == 0){
                count += i.second;
            }
            else if((i.second - 1)%2 == 0){
                count += i.second-1;
                odd++;
            }
            else{
                odd++;
            }
        }
        if(odd > 0) count++;

        return count;
    }
};