class Solution {
public:
    long long sumAndMultiply(int n) {
        int a = n;
        int num = 0;
        while(a > 0){
            int lastDigit = a%10;
            if(lastDigit != 0){
                num = num * 10 + lastDigit;
            }
            a /=10;
        }
        int number = 0;
        int sum = 0;
        while(num > 0){
            int lastDigit = num%10;
            number = number * 10 + lastDigit;
            sum = sum + lastDigit;
            num /=10;
        }
        return 1LL * number * sum;
        
    }
};