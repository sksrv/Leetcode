class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int low = 0;
        int res = 0;
        int zeroCount = 0;
        
        for(int high = 0;high < nums.size();high++){
            if(nums[high] == 0){
                zeroCount++;
            }
            while(zeroCount > 1){
                if(nums[low] == 0){
                    zeroCount--;
                }
                low++;
            }
            res = max(res, high - low);
        }
        return res;
    }
};