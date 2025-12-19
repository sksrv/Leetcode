class Solution {
public:
    bool isPrime(int a) {
        if (a <= 1) return false;
        if (a <= 3) return true;
        if (a % 2 == 0 || a % 3 == 0) return false;
        for (int i = 5; (long long)i * i <= a; i += 6) {
            if (a % i == 0 || a % (i + 2) == 0)
                return false;
        }
        return true;
    }

    int largestPrime(int n) {
        int sum = 0;
        int result = 0;

        for (int i = 2; i <= n; i++) {
            if (isPrime(i)) {
                sum += i;
                if (sum > n) break;
                if (isPrime(sum)) {
                    result = sum;
                }
            }
        }
        return result;
    }
};
