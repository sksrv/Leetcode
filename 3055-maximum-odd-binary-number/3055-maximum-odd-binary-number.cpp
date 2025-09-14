class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        sort(s.rbegin(),s.rend());
        int j = s.size()-1;
        for(int i = s.size()-2;i>=0;i--){
            if(s[j] == '1'){
                break;
            }
            if(s[i] == '1' && s[j] == '0'){
                swap(s[i],s[j]);
                break;
            }
        }
        return s;
    }
};