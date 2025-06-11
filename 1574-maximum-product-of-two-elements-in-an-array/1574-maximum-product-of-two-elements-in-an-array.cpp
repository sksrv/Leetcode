class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prd=1;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        prd=(nums[n-1]-1)*(nums[n-2]-1);
        return prd;
    }
};