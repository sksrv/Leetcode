class Solution {
public:
    long long removeZeros(long long n) {
        string number = to_string(n);
        string ans = "";
        for(char i:number){
            if(i != '0'){
                ans += i;
            }
        }
        long long num = stoll(ans);
        return num;
    }
};