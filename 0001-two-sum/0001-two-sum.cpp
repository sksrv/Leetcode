class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> mp;

        for(int i=0;i<nums.size();i++){
            int a = nums[i];
            int more = target - a;
            if(mp.find(more) != mp.end()){
                //return {mp[more] , i};
                ans.push_back(mp[more]);
                ans.push_back(i);
            }
            mp[a] = i;
        }
        return ans;
    }
};