class Solution {
public:
    bool isPrime(int n) {
    if (n <= 1) return false;        // 0 and 1 are not prime
    if (n == 2) return true;         // 2 is prime
    if (n % 2 == 0) return false;    // even numbers >2 are not prime

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        for(auto i:mp){
            if(isPrime(i.second)) return true;
        }
        return false;
    }
};