class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i = 0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int maxFreq = 0;
        int ans = 0;
        for(int i = 0;i<mp.size();i++){
            int freq = mp[i];
            if(freq>maxFreq){
                maxFreq = freq;
                ans = 0;
                ans = maxFreq;
            }
            else if(freq == maxFreq){
                ans += maxFreq;
            }
            else{
                //do nothing
            }
        }
        return ans;
    }
};