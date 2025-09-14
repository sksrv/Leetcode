class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        vector<int> ans;
        sort(nums.rbegin(),nums.rend());
        ans.push_back(nums[0]);
        int i = 1;
        while(k -1 > 0 && i < nums.size()){
            if(nums[i] != nums[i-1]){
                ans.push_back(nums[i]);
                k--;
            }
            i++;
            
        }
        return ans;
    }
};