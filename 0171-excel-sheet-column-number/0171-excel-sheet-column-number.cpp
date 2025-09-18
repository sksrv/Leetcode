class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        int a = 0;
        int n = columnTitle.size();
        while(n > 0){
            char ch = columnTitle[n-1];
            int digit = ch - 'A' + 1;
            ans += digit * pow(26,a);
            a++;
            n--; 
        }
        return ans;
    }
};