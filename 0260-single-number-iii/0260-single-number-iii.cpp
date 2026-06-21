class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {

        long long xorr = 0;

        for(int i : nums){
            xorr = i ^ xorr;
        }
        long long rightMost = (xorr & (xorr-1)) ^ xorr;

        int b1 = 0;
        int b2 = 0;

        for(int i : nums){
            if(i & rightMost){
                b1 = b1 ^ i;
            }
            else{
                b2 = b2 ^ i;
            }
        }
        return {b1,b2};
    }
};