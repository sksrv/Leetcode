class Solution {
public:
    string findValidPair(string s) {
        unordered_map<char,int> mp;

        for(char c:s){
            mp[c]++;
        }
        for(int i=0;i<s.size()-1;i++){
            char a = s[i];
            char b = s[i+1];

            if(a == b) continue;

            if(mp[a] == (a - '0') && mp[b] == (b - '0')){
                string res = "";
                res +=a;
                res +=b;
                return res;
            }
        }
        return "";
    }
};