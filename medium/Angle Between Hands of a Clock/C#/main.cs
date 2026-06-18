// Problem: Angle Between Hands of a Clock
// Link to the problem: https://leetcode.com/problems/angle-between-hands-of-a-clock/
public class Solution
{
    public double AngleClock(int hour, int minutes)
    {
        double x = 0.5 * (hour * 60 + minutes);
        double y = 6 * minutes;
        double z = Math.Abs(x - y);
        double ans = Math.Min(360 - z, z);
        return ans;
    }
}