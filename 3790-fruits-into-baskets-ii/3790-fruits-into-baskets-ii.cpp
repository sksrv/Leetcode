class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int count = 0;
        for(int i = 0;i<fruits.size();i++){
            bool flag = true;
            for(int j = 0;j<baskets.size();j++){
                if(fruits[i] <= baskets[j] && baskets[j]>0){
                flag = false;
                baskets[j] = -1;
                break;
            }
            }
            if(flag){
                count++;
            }
        }
    return count;
    }
};