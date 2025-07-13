class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int minSum = 0, runningSum = 0;
        for (int num : nums) {
            runningSum += num;
            minSum = min(minSum, runningSum);
        }
        return 1 - minSum;
    }
};
