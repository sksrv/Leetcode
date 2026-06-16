class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> have;
        unordered_map<char,int> need;

        for(auto i : text){
            have[i]++;
        }

        string balloon = "balloon";
        for(auto i : balloon){
            need[i]++;
        }

        int res = INT_MAX;

        for(auto i : need){
            char c = i.first;
            int fneed = i.second;
            int fhave = have[c];

            int times = fhave / fneed;

            res = min(res,times);
        }

        return res;
    }
};