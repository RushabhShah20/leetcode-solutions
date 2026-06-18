// Problem: Angle Between Hands of a Clock
// Link to the problem: https://leetcode.com/problems/angle-between-hands-of-a-clock/
class Solution
{
public:
    double angleClock(int hour, int minutes)
    {
        const double x = 0.5 * (hour * 60 + minutes);
        const double y = 6 * minutes;
        const double z = abs(x - y);
        const double ans = min(360 - z, z);
        return ans;
    }
};