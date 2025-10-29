class Solution {
public:
    int smallestNumber(int n) {
        int i = 0;
        while(true){
            int a = pow(2,i) -1;
            if(a>=n){
                return a;
            }
            else{
                i++;
            }
        }
    }
};