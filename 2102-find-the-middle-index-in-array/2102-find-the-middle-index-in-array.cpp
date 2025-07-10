class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int leftSum;
        int rightSum=0;
        for(int i=0;i<nums.size();i++){
            if(i==0){
                leftSum=0;
                rightSum = std::accumulate(nums.begin()+1, nums.end(), 0);
                if(leftSum==rightSum){
                    return i;
                }
            }
            if(i==nums.size()-1){
                leftSum=std::accumulate(nums.begin(), nums.end()-1, 0);
                rightSum =0;
                if(leftSum==rightSum){
                    return i;
                }
            }
if(accumulate(nums.begin(), nums.begin()+i, 0)==accumulate(nums.begin()+i+1, nums.end(), 0)){
                return i;
            }
        }
        return -1;
    }
};