// Problem: Angle Between Hands of a Clock
// Link to the problem: https://leetcode.com/problems/angle-between-hands-of-a-clock/
class Solution {
  double angleClock(int hour, int minutes) {
    final double x = 0.5 * (hour * 60 + minutes);
    final double y = 6.0 * minutes;
    final double z = (x - y).abs();
    final double ans = min(360 - z, z);
    return ans;
  }
}
