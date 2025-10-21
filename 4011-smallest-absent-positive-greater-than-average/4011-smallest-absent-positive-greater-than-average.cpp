class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        double sum = 0;
        for (int x : nums) sum += x;

        double avg = sum / nums.size();
        int start = (int)ceil(avg);  

        for (int i = start; i <= 100000; i++) {
            if (i > avg && i > 0 && s.find(i) == s.end()) {
                return i;
            }
        }
        return -1;
    }
};
