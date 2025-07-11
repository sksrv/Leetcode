class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> ans;
        int diff=INT_MAX;
        for (int i = 1; i <= sqrt(area); i++) {
            if (area % i == 0) {
                int w = i;
                int l = area / i;

                if (l >= w && abs(l - w) < diff) {
                    diff = abs(l - w);
                    ans = {l, w};
                }
            }
        }
        return ans;
    }
};