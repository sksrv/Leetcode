class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int rightSum= 0;
        int leftSum= nums[i];
        int ans = 0;

        for(int j = 1;j<n;j++){
            rightSum += nums[j];
        }
        while(i < n-1){
            if(abs(leftSum-rightSum) % 2 == 0){
                ans++;
            }
            i++;
            leftSum += nums[i];
            rightSum -= nums[i];
        }    
        return ans;
    }
};