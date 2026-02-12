class Solution {
public:
    int longestBalanced(string s) {
        int ans = 0;
        int n = s.size();

        for(int i = 0;i<n;i++){
            vector<int> freq(26,0);
            int distinct = 0;
            int maxFreq = 0;

            for(int j = i;j<n;j++){
                int idx = s[j] - 'a';

                if(freq[idx] == 0) distinct++;
                freq[idx]++;

                maxFreq = max(maxFreq, freq[idx]);

                int length = j-i+1;

                if(length == maxFreq * distinct){
                    ans = max(ans,length);
                }
            }
        }
        return ans;
    }
};