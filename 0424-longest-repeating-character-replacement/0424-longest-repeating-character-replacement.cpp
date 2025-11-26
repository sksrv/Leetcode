class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> arr(26,0);
        int res = 0;
        int low = 0;
        int n = s.size();
        int maxCount = 0;

        for(int high = 0;high < n;high++){
            arr[s[high] - 'A']++;
            int len = high-low+1;
            maxCount = max(maxCount,arr[s[high] - 'A']);
            int diff = len - maxCount;
            while(diff > k){
                arr[s[low] - 'A']--;
                low++;
                len = high-low+1;
                diff = len-maxCount;
            }
            res = max(res,len);
        }
        return res;
    }
};