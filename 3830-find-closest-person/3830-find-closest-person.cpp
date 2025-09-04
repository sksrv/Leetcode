class Solution {
public:
    int findClosest(int x, int y, int z) {
        int dis_XZ = abs(x-z);
        int dis_YZ = abs(y-z);

        if(dis_XZ < dis_YZ) return 1;
        else if(dis_YZ < dis_XZ) return 2;
        else return 0;
    }
};