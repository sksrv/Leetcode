class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int totalDrunk = 0;
        int empty = 0;

        
        totalDrunk += numBottles;
        empty += numBottles;

        
        while (empty >= numExchange) {
            
            empty -= numExchange;
            numExchange++;   
            totalDrunk++;    
            empty++;         
        }

        return totalDrunk;
    }
};
