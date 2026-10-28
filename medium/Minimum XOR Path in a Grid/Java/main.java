// Problem: Minimum XOR Path in a Grid
// Link to the problem: https://leetcode.com/problems/minimum-xor-path-in-a-grid/
class Solution {
    public int minCost(int[][] grid) {
        final int m = grid.length, n = grid[0].length;
        int[][][] dp = new int[m][n][1024];
        dp[0][0][grid[0][0]] = 1;
        for (int i = 1; i < m; i++) {
            for (int k = 0; k < 1024; k++) {
                if (dp[i - 1][0][k] == 1) {
                    dp[i][0][k ^ grid[i][0]] = 1;
                }
            }
        }
        for (int j = 1; j < n; j++) {
            for (int k = 0; k < 1024; k++) {
                if (dp[0][j - 1][k] == 1) {
                    dp[0][j][k ^ grid[0][j]] = 1;
                }
            }
        }
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                for (int k = 0; k < 1024; k++) {
                    if (dp[i - 1][j][k] == 1 || dp[i][j - 1][k] == 1) {
                        dp[i][j][k ^ grid[i][j]] = 1;
                    }
                }
            }
        }
        for (int k = 0; k < 1024; k++) {
            if (dp[m - 1][n - 1][k] == 1) {
                return k;
            }
        }
        return 0;
    }
}