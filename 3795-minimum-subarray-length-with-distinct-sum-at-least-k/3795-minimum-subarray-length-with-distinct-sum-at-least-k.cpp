class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        int n = nums.size();
        int low = 0;
        int ans = INT_MAX;

        unordered_map<int,int> freq;
        long long distinctSum = 0;

        for(int high = 0; high < n; high++){
            freq[nums[high]]++;
            if(freq[nums[high]] == 1){
                distinctSum += nums[high];
            }

            // shrink window if condition true
            while(distinctSum >= k){
                ans = min(ans, high - low + 1);

                freq[nums[low]]--;
                if(freq[nums[low]] == 0){
                    distinctSum -= nums[low];
                }
                low++;
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};
