class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int res = INT_MAX;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long eat = 0;

            for (int i = 0; i < piles.size(); i++) {
                if (piles[i] % mid == 0) {
                    eat += piles[i] / mid;
                } else {
                    eat += piles[i] / mid + 1;
                }
            }

            if (eat <= h) {
                res = min(res, mid);
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }

        return res;
    }
};