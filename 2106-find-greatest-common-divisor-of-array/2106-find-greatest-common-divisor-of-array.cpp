class Solution {
public:
    int findGCD(vector<int>& nums) {
         int max_value = *std::max_element(nums.begin(), nums.end());
         int min_value = *std::min_element(nums.begin(), nums.end());
         int i=1;
         int ans=1;
         while(i<=min_value){
            if(min_value%i==0 && max_value%i==0){
                ans=i;
            }
            i++;
         }
         return ans;
    }
};