class Solution {
public:
    string largestGoodInteger(string num) {
        string good = "";
        int m = -1;
        for(int i = 0;i<=num.size()-3;i++){
            if(num[i]==num[i+1] && num[i+1]==num[i+2]){
                int digit = num[i] - '0';
                m = max(m,digit);
            }
        }
        if(m>=0){
            good += string(3, '0' + m);
        }
        return good;
    }
};