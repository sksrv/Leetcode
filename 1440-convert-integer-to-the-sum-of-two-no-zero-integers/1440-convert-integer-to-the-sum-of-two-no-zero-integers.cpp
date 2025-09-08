class Solution {
    bool isZero(int x) {
        while (x > 0) {
            if (x % 10 == 0) return true;
            x /= 10;
        }
        return false;
    }
public:
    vector<int> getNoZeroIntegers(int n) {
        int a = 1, b = n - 1;
        while (isZero(a) || isZero(b)) {
            a++;
            b = n - a;
        }
        return {a, b};
    }
};