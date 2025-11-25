class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;
        int sum = 0;
        int low = 0;
        int high = 0;
        while(high < n){
            sum = sum + nums[high];
            while(sum >= target){
                ans = min(ans,high-low+1);
                sum = sum - nums[low];
                low++;
            }
            high++;
        }
        return ans == INT_MAX ? 0 : ans;
    }
};