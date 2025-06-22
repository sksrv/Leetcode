class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();

        if (size == 1) {
            if (flowerbed[0] == 0) {
                n--;
            }
            return n <= 0;
        }

        if (flowerbed[0] == 0 && flowerbed[1] == 0) {
            n--;
            flowerbed[0] = 1;
        }

        for (int i = 1; i < size - 1 && n > 0; i++) {
            if (flowerbed[i] == 0 && flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0) {
                n--;
                flowerbed[i] = 1;
            }
        }

        if (flowerbed[size - 1] == 0 && flowerbed[size - 2] == 0) {
            n--;
            flowerbed[size - 1] = 1;
        }

        if (n <= 0) {
            return true;
        } else {
            return false;
        }
    }
};
