class Solution {
public:
    string largestGoodInteger(string num) {
        string good = "";
        
        for(int i = 0;i<=num.size()-3;i++){
            if(num[i]==num[i+1] && num[i+1]==num[i+2]){
                string triple = num.substr(i,3);
                good = max(good,triple);
            }
        }
        
        return good;
    }
};