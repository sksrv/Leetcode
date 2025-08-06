class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int posIndex = 0;
        int negIndex = 1;
        int n = nums.size();
        vector<int> ans(n);

        for(int i=0;i<n;i++){
            if(nums[i]>0){
                ans[posIndex] = nums[i];
                posIndex +=2;
            }
            else{
                ans[negIndex] = nums[i];
                negIndex +=2;
            }
        }
        return ans;
    }
};