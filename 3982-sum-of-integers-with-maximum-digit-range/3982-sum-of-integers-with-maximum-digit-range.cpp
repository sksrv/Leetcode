class Solution {
public:
    int range(int n){
        n = abs(n);
        int maxi = n % 10;
        int mini = n % 10;

        n /= 10;

        while(n > 0){
            int lastDigit = n % 10;
            maxi = max(maxi, lastDigit);
            mini = min(mini, lastDigit);
            n /= 10;
        }

        return maxi - mini;
    }

    int maxDigitRange(vector<int>& nums) {
        int digitRange = -1;
        int sum = 0;

        for(int i = 0; i < nums.size(); i++){
            int r = range(nums[i]);

            if(r > digitRange){
                digitRange = r;
                sum = nums[i];   // reset
            }
            else if(r == digitRange){
                sum += nums[i];
            }
        }

        return sum;
    }
};