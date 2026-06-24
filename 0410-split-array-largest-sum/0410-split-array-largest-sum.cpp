class Solution {
public:
    bool possible(vector<int>& nums, int k, int guess){
        int i = 1;
        int sum = nums[0];
        int parts = 1;

        while(i < nums.size()){
        
            if(sum + nums[i] <= guess){
                sum += nums[i];
            }
            else{
                parts++;
                sum = nums[i];
            }
            
            i++;
        }

        return parts <= k;
    }
    int splitArray(vector<int>& nums, int k) {

        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);
        int ans = 0;

        while(low <= high){
            int mid = low + (high-low)/2;

            if(possible(nums,k,mid)){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }

        }
        return ans;
    }
};