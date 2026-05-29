class Solution {
public:
    int digitSum(int a){
        int sum = 0;
        while(a != 0){
            int lastDigit = a%10;
            sum += lastDigit;
            a /= 10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        for(int i = 0;i < nums.size();i++){
            int Sum = digitSum(nums[i]);
            nums[i] = Sum;
        }
        int mini = *min_element(nums.begin(),nums.end());
        return mini;
    }
};