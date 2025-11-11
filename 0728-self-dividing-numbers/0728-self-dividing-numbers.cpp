class Solution {
public:
bool isSelfDividing(int n){
    int a = n;
    while(a != 0){
        int lastDigit = a%10;
        if(lastDigit == 0 || n%lastDigit != 0){
            return false;
        }
        a /= 10;
    }
    return true;
}
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i = left;i<= right;i++){
            if(isSelfDividing(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};