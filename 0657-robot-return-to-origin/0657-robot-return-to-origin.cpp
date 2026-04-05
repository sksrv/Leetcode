class Solution {
public:
    bool judgeCircle(string moves) {
        int r = 0;
        int l = 0;
        int u = 0;
        int d = 0;

        for(char  c : moves){
            if(c == 'R' && l > 0){
                l--;
            }
            else if(c == 'R' && l <= 0){
                r++;
            }
            else if(c == 'L' && r > 0){
                r--;
            }
            else if(c == 'L' && r <= 0){
                l++;
            }
            else if(c == 'U' && d > 0){
                d--;
            }
            else if(c == 'U' && d <= 0){
                u++;
            }
            else if(c == 'D' && u > 0){
                u--;
            }
            else if(c == 'D' && u <= 0){
                d++;
            }
        }

        if((r == 0) && (l == 0) && (u == 0) && (d == 0)){
            return true;
        }
        else{
            return false;
        }
    }
};