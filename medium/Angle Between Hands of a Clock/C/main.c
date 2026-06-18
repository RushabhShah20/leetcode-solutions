// Problem: Angle Between Hands of a Clock
// Link to the problem: https://leetcode.com/problems/angle-between-hands-of-a-clock/
double angleClock(int hour, int minutes)
{
    const double x = 0.5 * (hour * 60.0 + minutes);
    const double y = 6.0 * minutes;
    const double z = fabs(x - y);
    const double ans = fmin(360.0 - z, z);
    return ans;
}