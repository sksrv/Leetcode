class Solution {
public:
    long long reflect(long long n) {
        long long r = 0;
        while (n > 0) {
            r = (r << 1) | (n & 1);
            n >>= 1;
        }
        return r;
    }

    vector<int> sortByReflection(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            long long ra = reflect(a), rb = reflect(b);
            return ra == rb ? a < b : ra < rb;
        });
        return nums;
    }
};
