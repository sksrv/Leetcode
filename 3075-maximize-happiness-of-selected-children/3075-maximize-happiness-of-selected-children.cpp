class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.rbegin(), happiness.rend());  
        long long sum = 0;

        for (int i = 0; i < k && i < happiness.size(); i++) {
            int curr = happiness[i] - i;  
            if (curr > 0) {
                sum += curr;
            } else {
                break;
            }
        }

        return sum;
    }
};
