class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i:arr){
            mp[i]++;
        }
        int result=-1;
        for(int i:arr){
            if(i==mp[i]){
                result=max(result,i);
            }
        }
        return result;
    }
};