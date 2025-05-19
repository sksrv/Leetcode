class Solution {
public:
    string triangleType(vector<int>& nums) {
        string ans="";
        if(nums[0]+nums[1]<=nums[2]){
            ans +="none";
            return ans;
        }
        if(nums[0]+nums[2]<=nums[1]){
            ans +="none";
            return ans;
        }
        if(nums[1]+nums[2]<=nums[0]){
            ans +="none";
            return ans;
        }
        // Equilateral
        if(nums[0]==nums[1] && nums[1]==nums[2]){
            ans +="equilateral";
            return ans;
        }
        //Isosceles
        if(nums[0]==nums[1] || nums[0]==nums[2] || nums[1]==nums[2]){
            ans +="isosceles";
            return ans;
        }
        //Scalene
        else{
            ans +="scalene";
            return ans;
        }
        
    }
};