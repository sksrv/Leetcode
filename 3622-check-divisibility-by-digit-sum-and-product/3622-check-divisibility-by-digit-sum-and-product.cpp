class Solution {
public:
    bool checkDivisibility(int n) {
       int sum = 0;
       int a = n;
       int prd = 1;

       while(n != 0){
            int d = n%10;
            sum += d;
            prd *= d;
            n /= 10;
       } 
       int totalSum = sum + prd;

       return a % totalSum == 0;
    }
};