class Solution {
public:
    bool check(vector<int>& candies,int a,int extra){
        bool res = true;
        for(int i=0;i<candies.size();i++){
            if((a+extra)<candies[i]){
                res = false;
            }
        }
        return res;
    }
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
            for(int i=0;i<candies.size();i++){
                    if(check(candies,candies[i],extraCandies)){
                        ans.push_back(true);
                    }
                    else{
                        ans.push_back(false);
                    }
            }
            return ans;
    }
};