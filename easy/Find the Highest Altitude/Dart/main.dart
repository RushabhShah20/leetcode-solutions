// Problem: Find the Highest Altitude
// Link to the problem: https://leetcode.com/problems/find-the-highest-altitude/
class Solution {
  int largestAltitude(List<int> gain) {
    final int n = gain.length;
    int ans = 0, x = 0;
    for (int i = 0; i < n; i++) {
      x += gain[i];
      ans = max(ans, x);
    }
    return ans;
  }
}
