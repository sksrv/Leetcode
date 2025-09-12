class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";
        
        while(columnNumber > 0){
            columnNumber--;
            char remainder = 'A' + (columnNumber%26);
            ans = remainder + ans;
            columnNumber /= 26;
        }

        return ans;
    }
};