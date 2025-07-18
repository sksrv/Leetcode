class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";

        bool negative = (num < 0);
        long long n = abs((long long)num);  // Use long long to avoid overflow on INT_MIN
        string ans = "";

        while (n > 0) {
            int r = n % 7;
            ans = to_string(r) + ans;
            n = n / 7;
        }

        if (negative) ans = "-" + ans;
        return ans;
    }
};
