class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        // sort(nums.rbegin(),nums.rend());
        int i = 0;
        while (i < n) {
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                if (nums[i] > nums[j]) {
                    cnt++;
                }
            }
            ans.push_back(cnt);
            i++;
        }

        return ans;
    }
};