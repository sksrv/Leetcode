class Solution {
public:
    bool isThree(int n) {
        int i=1 , count=1;
        while(i<=n/2){
            if(n%i==0){
                count++;
            }
            if(count>3){
                return false;
            }
            if(i*i==n){
                return true;
            }
            i++;
        }
        return false;
    }
};