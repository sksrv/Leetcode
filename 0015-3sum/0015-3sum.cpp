class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();

        for(int i = 0;i<n-2;i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            int l = i+1;  //left
            int r = n-1;  //right
            int sum = -1 * nums[i];

            while(l < r){
                int s = nums[l] + nums[r];

                if(sum == s){
                    ans.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;

                    while(l<n && nums[l] == nums[l-1]) l++;
                    while(r>=0 && nums[r] == nums[r+1]) r--;
                }
                else if(s < sum){
                    l++;
                }
                else{
                    r--;
                }
            }
        }
        return ans;
    }
};