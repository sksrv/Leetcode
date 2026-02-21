class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        // Prime numbers up to 20 (since max set bits <= 20)
        unordered_set<int> primes = {2, 3, 5, 7, 11, 13, 17, 19};
        
        int count = 0;
        
        for (int i = left; i <= right; ++i) {
            int bits = __builtin_popcount(i);  // Count set bits
            if (primes.count(bits)) {
                count++;
            }
        }
        
        return count;
    }
};