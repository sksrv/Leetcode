class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> ans;

        while (nums.size() >= 2) {
           
            auto alice = std::min_element(nums.begin(), nums.end());
            int alice_val = *alice;
            nums.erase(alice);

          
            auto bob = std::min_element(nums.begin(), nums.end());
            int bob_val = *bob;
            nums.erase(bob);

          
            ans.push_back(bob_val);
            ans.push_back(alice_val);
        }

        return ans;
    }
};
