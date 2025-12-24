class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int count = 0;
        int totalApples = 0;
        for(int i:apple){
            totalApples += i;
        }
        sort(capacity.rbegin(),capacity.rend());
        int totalCapacity = 0;
        for(int i:capacity){
            totalCapacity += i;
            count++;
            if(totalCapacity >= totalApples) return count;
        }
        return count;
    }
};