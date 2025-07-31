class Solution {
public:
  
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
            int maxCandy = *max_element(candies.begin(),candies.end());
            for(int i=0;i<candies.size();i++){
                  ans.push_back(candies[i]+extraCandies >= maxCandy);
            }
            return ans;
    }
};