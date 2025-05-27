// Problem: Angle Between Hands of a Clock
// Link to the problem: https://leetcode.com/problems/angle-between-hands-of-a-clock/
class Solution
{
public:
    double angleClock(int hour, int minutes)
    {
        double hour_angle = 0.5 * (hour * 60 + minutes);
        double minute_angle = 6 * minutes;
        double angle = abs(hour_angle - minute_angle);
        angle = min(360 - angle, angle);
        return angle;
    }
};