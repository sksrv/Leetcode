class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;
        int n = nums.size();

        // Collect indices for each number
        for (int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }

        int ans = INT_MAX;

        // For each value, check consecutive triples
        for (auto &it : mp) {
            auto &v = it.second;
            if (v.size() < 3) continue;

            for (int i = 0; i + 2 < v.size(); i++) {
                int a = v[i];
                int c = v[i + 2];

                // distance = 2 * (c - a)
                ans = min(ans, 2 * (c - a));
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};
