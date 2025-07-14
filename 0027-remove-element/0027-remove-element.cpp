class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            if(nums[i]==val && nums[j]!=val){
                swap(nums[i],nums[j]);
                i++;
                j--;
                continue;
            }
            if(nums[i] != val){
                i++;
                continue;
            }
            if(nums[j]==val){
                j--;
                continue;
            }
        }
        int count=0;
        for(int num:nums){
            if(num !=val){
                count++;
            }
        }
        return count;
    }
};