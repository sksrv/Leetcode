class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i:nums){
            if(i%2 == 0){
            mp[i]++;
            }
        }
        int ans = -1;
        int maxFreq = 0;
        for(auto i:mp){
            int num = i.first;
            int freq = i.second;
            if(freq > maxFreq){
                ans = num;
                maxFreq = freq;
            }
            else if(freq == maxFreq && num < ans){
                ans = num;
            }
        }
        return ans;
    }
};