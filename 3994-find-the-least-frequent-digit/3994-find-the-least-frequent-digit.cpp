class Solution {
public:
    int getLeastFrequentDigit(int n) {
        unordered_map<int,int> mp;

        while(n != 0){
            int digit = n%10;
            mp[digit]++;
            n /= 10;
        }
        int minFreq = INT_MAX;
        int leastFreqDigit = -1;

        for(auto i:mp){
            if(i.second < minFreq){
                minFreq = i.second;
                leastFreqDigit = i.first;
            }

            else if(i.second == minFreq && i.first < leastFreqDigit){
                leastFreqDigit = i.first;
            }
        }

        return leastFreqDigit;
    }
};