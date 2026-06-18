class Solution {
public:
    double angleClock(int hour, int minutes) {
        double angle = abs((30 * hour) - (11 * minutes)/2.0);
        
        return angle > 180 ? 360.0-angle : angle;
    }
};