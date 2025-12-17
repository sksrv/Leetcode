class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int largestSum = 0;
        int smallestSum = 0;
        int i = 0;
        int j = nums.size()-1;
        while( k != 0){
            largestSum += nums[j--];
            smallestSum += nums[i++];        
            k--;
        }
        return abs(largestSum - smallestSum);
    }
};