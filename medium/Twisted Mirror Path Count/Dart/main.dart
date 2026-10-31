// Problem: Twisted Mirror Path Count
// Link to the problem: https://leetcode.com/problems/twisted-mirror-path-count/
class Solution {
  int uniquePaths(List<List<int>> grid) {
    final int k = 1000000007, n = grid.length, m = grid[0].length;
    final List<List<int>> a = List<List<int>>.generate(
      m,
      (int _) => List<int>.filled(2, 0),
    );
    a[0][0] = 1;
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        if (i > 0) {
          if (grid[i - 1][j] == 0) {
            a[j][0] = (a[j][0] + a[j][1]) % k;
          } else {
            a[j][0] = a[j][1];
          }
        }
        if (j > 0) {
          if (grid[i][j - 1] == 0) {
            a[j][1] = (a[j - 1][0] + a[j - 1][1]) % k;
          } else {
            a[j][1] = a[j - 1][0];
          }
        }
      }
    }
    final int ans = (a[m - 1][0] + a[m - 1][1]) % k;
    return ans;
  }
}
