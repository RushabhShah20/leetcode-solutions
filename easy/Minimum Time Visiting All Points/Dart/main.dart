// Problem: Minimum Time Visiting All Points
// Link to the problem: https://leetcode.com/problems/minimum-time-visiting-all-points/
class Solution {
  int minTimeToVisitAllPoints(List<List<int>> points) {
    final int n = points.length;
    int ans = 0;
    for (int i = 1; i < n; i++) {
      ans += max(
        (points[i - 1][1] - points[i][1]).abs(),
        (points[i - 1][0] - points[i][0]).abs(),
      );
    }
    return ans;
  }
}
