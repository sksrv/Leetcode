class Solution {
public:
    bool isPresent(vector<int>& nums, int x) {
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == x)
                return true;

            if (nums[mid] < x)
                low = mid + 1;

            else
                high = mid - 1;
        }

        return false;
    }
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());

        for (int i = nums[0]; i < nums[nums.size() - 1]; i++) {
            if (!isPresent(nums, i)) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};