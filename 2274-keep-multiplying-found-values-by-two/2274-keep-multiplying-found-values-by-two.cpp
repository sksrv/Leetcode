class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        auto it = std::find(nums.begin(), nums.end(), original);
        while(it!=nums.end()){
            original =2 * original;
             it = std::find(nums.begin(), nums.end(), original);
        }
        return original;
    }
};