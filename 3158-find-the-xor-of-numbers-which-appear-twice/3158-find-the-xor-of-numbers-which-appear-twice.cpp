class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        int x = 0;
        for(auto i:mp){
            if(i.second == 2){
                x = x ^ i.first;
            }
        }
        return x;
    }
};