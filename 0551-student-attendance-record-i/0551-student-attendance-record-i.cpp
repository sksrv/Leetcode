class Solution {
public:
    bool checkRecord(string s) {
        int absent=0;
        int late=0;
        int i=0;
        while(i<s.size()){
            if(s[i]=='L' && s[i+1]=='L' && s[i+2]=='L'){
                late=1;
                
            }
            if(s[i]=='A'){
                absent++;
            }      
            i++;   
        }
      if(late==0 && absent<2){
        return true;
      }
      else{
        return false;
      }
    }
};