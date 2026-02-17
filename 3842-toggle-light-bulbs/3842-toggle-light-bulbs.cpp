class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        unordered_map<int,int> mp;
        vector<int> ans;

        for(int i = 0;i<bulbs.size();i++){
            if(mp.find(bulbs[i]) != mp.end()){
                mp[bulbs[i]]--;
                if (mp[bulbs[i]] == 0) {
                    mp.erase(bulbs[i]);
                }
            }
            else{
                mp[bulbs[i]]++;
            }
        }
        for(auto i:mp){
            ans.push_back(i.first);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};