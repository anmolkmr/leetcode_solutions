class Solution {
public:
    double angleClock(int hour, int minutes) {
        int hrcalc=360;
        double badisui=(hour*30)%360+minutes*0.5;
        double chotisui=(minutes*6);
        double ans= abs(badisui-chotisui);
        return min(360-ans,ans);
    }
};