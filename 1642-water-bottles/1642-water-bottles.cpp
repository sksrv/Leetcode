class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
         int ans = numBottles;  //9
         int exchange = numBottles;  //9

         while(exchange>=numExchange){   
            int a = exchange/numExchange;  //3 
            exchange = a + exchange%numExchange; //3

            ans += a; //18 19
         }
         return ans;
    }
};