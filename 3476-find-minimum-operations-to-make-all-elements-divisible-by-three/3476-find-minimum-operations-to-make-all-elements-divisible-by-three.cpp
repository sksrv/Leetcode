class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;
        for(int i:nums){
            if(i%3 == 0){
                continue;
            }
            
            count ++;
            
            // else if(i%3 == 1){

            // }
        }
        return count;
    }
};