class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int zero = 0;
        for (int i: nums){
            if(i == 0) zero++;
        }
        int cnt = 0;
        for(int i = nums.size()-1;i>=0;i--){
            if((zero > 0) && (nums[i] != 0)){
                cnt++;
            }
            else{
                zero--;
            }
            if(cnt == zero) break;
        }

        return cnt;
    }
};