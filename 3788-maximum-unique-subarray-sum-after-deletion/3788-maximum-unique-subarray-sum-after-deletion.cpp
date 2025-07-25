class Solution {
public:
    int maxSum(std::vector<int>& nums) {
        std::unordered_set<int> unique_nums(nums.begin(), nums.end());

        long long max_sum = 0;
        bool has_positive = false;

        for (int num : unique_nums) {
            if (num > 0) {
                max_sum += num;
                has_positive = true;
            }
        }

        if (has_positive) return max_sum;
        if (unique_nums.count(0)) return 0;

        return *std::max_element(unique_nums.begin(), unique_nums.end());
    }
};
