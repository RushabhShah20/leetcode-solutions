// Problem: Number of Ways to Paint N × 3 Grid
// Link to the problem: https://leetcode.com/problems/number-of-ways-to-paint-n-3-grid/
class Solution {
  int numOfWays(int n) {
    const int mod = 1000000007;
    int a = 6, b = 6;
    for (int i = 1; i < n; i++) {
      final int x = ((3 * a) + (2 * b)) % mod;
      final int y = ((2 * a) + (2 * b)) % mod;
      a = x;
      b = y;
    }
    final int ans = (a + b) % mod;
    return ans;
  }
}
