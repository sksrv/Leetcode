class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);

        for (int i = 0; i < n; i++) {
            int a = nums[i];

            if (a > 0) {
                int newIndex = (i + a) % n;   
                result[i] = nums[newIndex];
            }
            else if (a < 0) {
                int newIndex = (i + a) % n;   
                if (newIndex < 0) newIndex += n; 
                result[i] = nums[newIndex];
            }
            else {
                result[i] = nums[i];
            }
        }

        return result;
    }
};
