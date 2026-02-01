class Solution {
public:
    int toMinutes(string t){
        return stoi(t.substr(0,2)) * 60 + stoi(t.substr(3,2));
    }
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;

        for(int i = 0;i<timePoints.size();i++){
            minutes.push_back(toMinutes(timePoints[i]));
        }

        sort(minutes.begin(),minutes.end());

        int minDiff = 1440;

        for(int i = 1;i<minutes.size();i++){
            minDiff = min(minDiff,minutes[i]-minutes[i-1]);
        }

        minDiff = min(minDiff,1440 - minutes.back()+minutes[0]);

        return minDiff;
    }
};