// Problem: Triangle
// Link to the problem: https://leetcode.com/problems/triangle/
class Solution {
  int minimumTotal(List<List<int>> triangle) {
    int n = triangle.length;
    List<int> dp = new List.filled(n, 0);
    for (int i = 0; i < n; i++) {
      dp[i] = triangle[n - 1][i];
    }
    for (int i = n - 2; i >= 0; i--) {
      for (int j = 0; j < triangle[i].length; j++) {
        dp[j] = triangle[i][j] + min(dp[j], dp[j + 1]);
      }
    }
    return dp[0];
  }
}
