// Problem: Minimum Score Triangulation of Polygon
// Link to the problem: https://leetcode.com/problems/minimum-score-triangulation-of-polygon/
class Solution {
  int minScoreTriangulation(List<int> values) {
    int n = values.length;
    if (n == 3) {
      return values[0] * values[1] * values[2];
    }
    List<List<int>> dp = List.generate(n - 1, (rowIndex) => List.filled(n, 0));
    for (int x = 2; x <= n - 1; x++) {
      for (int i = 0; i < n - x; i++) {
        int j = i + x;
        int w = 0x7FFFFFFFFFFFFFFF, e = values[i] * values[j];
        for (int k = i + 1; k < j; k++) {
          w = min(w, e * values[k] + dp[i][k] + dp[k][j]);
        }
        dp[i][j] = w;
      }
    }
    return dp[0][n - 1];
  }
}
