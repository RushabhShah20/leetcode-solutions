// Problem: Ones and Zeroes
// Link to the problem: https://leetcode.com/problems/ones-and-zeroes/
class Solution {
  int findMaxForm(List<String> strs, int m, int n) {
    List<List<int>> dp = new List.generate(m + 1, (i) => List.filled(n + 1, 0));
    for (String str in strs) {
      int zeroes = 0, ones = 0;
      for (int x = 0; x < str.length; x++) {
        if (str[x] == '0') {
          zeroes++;
        } else {
          ones++;
        }
      }
      for (int i = m; i >= zeroes; i--) {
        for (int j = n; j >= ones; j--) {
          dp[i][j] = max(dp[i][j], 1 + dp[i - zeroes][j - ones]);
        }
      }
    }
    return dp[m][n];
  }
}
