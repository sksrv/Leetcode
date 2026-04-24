class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int countR = 0;
        int countL = 0;
        int countDash = 0;

        for(char i : moves){
            if(i == 'L')          countL++;
            else if(i == 'R')     countR++;

            else        countDash++;
        }

        if(countL >= countR){
            return countL-countR + countDash;
        }
        else{
            return countR-countL + countDash;
        }
    }
};