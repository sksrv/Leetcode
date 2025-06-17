class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                int d1=i;
                for(int j=i+1;j<nums.size();j++){
                    if(nums[j]==1){
                        int d2=j;
                        if((d2-d1-1)<k){
                            return false;
                        }
                        break;
                    }
                }
            }
        }
        return true;
    }
};