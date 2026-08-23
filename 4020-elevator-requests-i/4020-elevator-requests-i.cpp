class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int totalTime = 0;
        int floor = 0;

        for(int i: requests){
            totalTime += abs(floor - i);
            floor = i;
        }

        return totalTime;
    }
};