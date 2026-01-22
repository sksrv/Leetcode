class Solution {
public:
   bool isNonDecreasing(const vector<int>& nums) {
    for (int i = 0; i < nums.size() - 1; ++i) {
        if (nums[i] > nums[i + 1]) {
            return false;
        }
    }
    return true;
}

int minimumPairRemoval(vector<int>& nums) {
        int operations = 0;

    while (!isNonDecreasing(nums)) {
            int minSum = INT_MAX;
        int minIndex = -1;

        // Find the leftmost pair with the minimum sum
        for (int i = 0; i < nums.size() - 1; ++i) {
            int pairSum = nums[i] + nums[i + 1];
            if (pairSum < minSum) {
                minSum = pairSum;
                minIndex = i;
            }
        }

        // Replace the pair with their sum
        nums[minIndex] = nums[minIndex] + nums[minIndex + 1];
        nums.erase(nums.begin() + minIndex + 1); // Remove the second element
        operations++;
    }
    return operations;
    }
};