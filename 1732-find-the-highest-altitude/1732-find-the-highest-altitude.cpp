class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxAlt = 0;
        for(int i: gain){
            int ans = ans + i;  
            maxAlt = max(maxAlt,ans);
            
        }
        return maxAlt;
    }
};