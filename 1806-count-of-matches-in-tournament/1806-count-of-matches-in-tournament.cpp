class Solution {
public:
    int numberOfMatches(int n) {
        int matches;
        int ans=0;
        while(n!=1){
            if(n%2==0){                 //Even
                matches= n/2;
                n= n/2;
            }
            else{                      //Odd
                matches= (n-1)/2;
                n= (n-1)/2+1;
            }
            ans +=matches;
        }
        return ans;
    }
};