class Solution {
public:
    int totalMoney(int n) {
        int weeks = n / 7;
        int days = n % 7;

        
        int fullWeeks = weeks * 28 + 7 * (weeks * (weeks - 1) / 2);

        
        int remainingDays = 0;
        for (int i = 1; i <= days; i++) {
            remainingDays += (weeks + i);
        }

        return fullWeeks + remainingDays;
    }
};
