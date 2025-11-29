class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum=0;
        //calculate the sum of the array
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        // calculating remainder
        long long remainder=sum%k;
        
        if(remainder==0){
            return 0;
        }
        
        return remainder;
        
    }
};