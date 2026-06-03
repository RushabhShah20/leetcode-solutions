// Problem: Earliest Finish Time for Land and Water Rides II
// Link to the problem: https://leetcode.com/problems/earliest-finish-time-for-land-and-water-rides-ii/
class Solution {
  int solve(
    final int n,
    final int m,
    final List<int> a1,
    final List<int> d1,
    final List<int> a2,
    final List<int> d2,
  ) {
    int x = 0x7fffffffffffffff;
    for (int i = 0; i < n; i++) {
      x = min(x, a1[i] + d1[i]);
    }
    int y = 0x7fffffffffffffff;
    for (int i = 0; i < m; i++) {
      y = min(y, max(a2[i], x) + d2[i]);
    }
    return y;
  }

  int earliestFinishTime(
    List<int> landStartTime,
    List<int> landDuration,
    List<int> waterStartTime,
    List<int> waterDuration,
  ) {
    final int n = landDuration.length, m = waterDuration.length;
    final int x = solve(
      n,
      m,
      landStartTime,
      landDuration,
      waterStartTime,
      waterDuration,
    );
    final int y = solve(
      m,
      n,
      waterStartTime,
      waterDuration,
      landStartTime,
      landDuration,
    );
    final int ans = min(x, y);
    return ans;
  }
}
