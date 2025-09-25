class Solution {
public:
    vector<int> evenOddBit(int n) {
      vector<int> v(2,0);
      bool swithc= true;
      while(n){
        if(swithc){
            if(n&1){
                v[0]++;
            }
            swithc=false;
        }
        else{
            if(n&1){
                v[1]++;
            }
            swithc=true;
        }
        n=n>>1;
      } 
      return v; 
    }
};