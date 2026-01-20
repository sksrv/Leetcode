class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxPrd = nums[0];
        int minPrd = nums[0];
        int res = nums[0];

        for(int i = 1;i<nums.size();i++){
            int v1 = nums[i];
            int v2 = maxPrd * nums[i];
            int v3 = minPrd * nums[i];
            maxPrd = max(v1, max(v2,v3));
            minPrd = min(v1, min(v2,v3));
            res = max(res,maxPrd);
        }
        return res;
    }
};