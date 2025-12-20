class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt = 0;
        for(int i = 0;i<details.size();i++){
            string s = details[i];
            char a = s[11];
            char b = s[12];
            int age = (a - '0') * 10 + (b - '0');
            if(age > 60) cnt++; 
        }
        return cnt;
    }
};