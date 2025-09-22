class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        for (int x : nums) {
            mp[x]++;
        }

        int maxFreq = 0, ans = 0;
        for (auto &p : mp) {
            int freq = p.second;
            if (freq > maxFreq) {
                maxFreq = freq;
                ans = freq;   
            } 
            else if (freq == maxFreq) {
                ans += freq;  
            }
        }
        return ans;
    }
};
