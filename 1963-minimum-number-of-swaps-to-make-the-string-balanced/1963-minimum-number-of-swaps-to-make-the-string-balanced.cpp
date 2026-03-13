class Solution {
public:
    int minSwaps(string s) {
        int open = 0;
        int inbalance = 0;
        int maxInbalance = 0;

        for(char c : s){
            if(c == '['){
                open++;
            } 
            else{
                if(open > 0){
                    open--;
                }
                else{
                    inbalance++;
                    maxInbalance = max(maxInbalance, inbalance);
                }
            }
        }

        return (maxInbalance + 1) / 2;
    }
};
