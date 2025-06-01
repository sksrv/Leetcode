class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int alice=0;
        int bob=0;
        for(int i:nums){
            if(i>9){
                alice +=i;
            }
            else{
                bob +=i;
            }
        }
        if(alice==bob){
            return false;
        }
        else{
            return true;
        }
        
    }
};