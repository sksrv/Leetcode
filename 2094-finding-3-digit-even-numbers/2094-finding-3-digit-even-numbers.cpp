class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> ans;
        bool seen[1000] = {};

        int n = digits.size();

        for (int i = 0; i < n; i++) {          // ones
            for (int j = 0; j < n; j++) {      // tens
                if (i == j) continue;

                for (int k = 0; k < n; k++) {  // hundreds
                    if (i == k || j == k) continue;

                    // Hundreds digit cannot be 0
                    if (digits[k] == 0) continue;

                    // Ones digit must be even
                    if (digits[i] % 2 != 0) continue;

                    int num = digits[k] * 100 + digits[j] * 10 + digits[i];

                    if (!seen[num]) {
                        seen[num] = true;
                        ans.push_back(num);
                    }
                }
            }
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};