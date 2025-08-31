class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
                int i = 0;
                while(i < k){
                    int min = nums[0];
                    int idx = 0;
                    for(int j = 1;j<nums.size();j++){
                        if(nums[j]<min){
                            min = nums[j];
                            idx = j;
                        }
                    }
                    nums[idx] = nums[idx] * multiplier;
                    i++;
                }
        return nums;
    }
};