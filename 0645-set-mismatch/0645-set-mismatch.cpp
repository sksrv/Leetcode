class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int duplicate = -1, missing = -1;

        // Mark visited numbers
        for (int i = 0; i < n; i++) {
            int idx = abs(nums[i]) - 1;
            if (nums[idx] < 0) {
                duplicate = abs(nums[i]);  // We've seen this number before
            } else {
                nums[idx] = -nums[idx];  // Mark as visited
            }
        }

        // Find the index that was never marked
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                missing = i + 1;  // That index + 1 is missing
            }
        }

        return {duplicate, missing};
    }
};
