class Solution {
public:
    int smallestEvenMultiple(int n) {
        int a = n;
        while(true){
            if(a%n == 0 && a%2 == 0){
                return a;
            }
            a++;
        }
    }
};