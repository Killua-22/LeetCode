class Solution {
public:
    double angleClock(int hour, int minutes) {
        
        
        
        double minangle = (minutes/60.0) * 360.0;
        double hourangle = (hour%12/12.0) * 360.0 + minutes * 0.5;
        
        double res = abs(hourangle - minangle);
     
        return min(res, 360.0-res);
    }
};