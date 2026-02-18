class Solution {
public:
    bool hasAlternatingBits(int n) {
        int bit = n%2;  
        n = n/2;  
        while(n >0){
            int nextBit = n%2; 
            if(bit == nextBit) return false;
            bit = nextBit; 
            n = n/2; 

        }
        return true;
    }
};