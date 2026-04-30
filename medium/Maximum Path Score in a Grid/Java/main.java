// Problem: Maximum Path Score in a Grid
// Link to the problem: https://leetcode.com/problems/maximum-path-score-in-a-grid/
class Solution {
    public int maxPathScore(int[][] grid, int k) {
        final int m = grid.length, n = grid[0].length;
        int[][][] dp = new int[m][n][k + 1];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                for (int c = 0; c <= k; c++) {
                    dp[i][j][c] = -1;
                }
            }
        }
        dp[0][0][0] = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                for (int c = 0; c <= k; ++c) {
                    if (dp[i][j][c] == -1) {
                        continue;
                    }
                    if (i + 1 < m) {
                        final int x = grid[i + 1][j], y = x == 0 ? 0 : 1;
                        if (c + y <= k) {
                            dp[i + 1][j][c + y] = Math.max(dp[i + 1][j][c + y], dp[i][j][c] + x);
                        }
                    }
                    if (j + 1 < n) {
                        final int x = grid[i][j + 1], y = x == 0 ? 0 : 1;
                        if (c + y <= k) {
                            dp[i][j + 1][c + y] = Math.max(dp[i][j + 1][c + y], dp[i][j][c] + x);
                        }
                    }
                }
            }
        }
        int ans = -1;
        for (int i = 0; i <= k; ++i) {
            ans = Math.max(ans, dp[m - 1][n - 1][i]);
        }
        return ans;
    }
}