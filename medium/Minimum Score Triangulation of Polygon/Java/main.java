// Problem: Minimum Score Triangulation of Polygon
// Link to the problem: https://leetcode.com/problems/minimum-score-triangulation-of-polygon/
class Solution {
    public int minScoreTriangulation(int[] values) {
        int n = values.length;
        if (n == 3) {
            return values[0] * values[1] * values[2];
        }
        int[][] dp = new int[n - 1][n];
        for (int x = 2; x <= n - 1; x++) {
            for (int i = 0; i < n - x; i++) {
                int j = i + x;
                int w = Integer.MAX_VALUE, e = values[i] * values[j];
                for (int k = i + 1; k < j; k++) {
                    w = Math.min(w, e * values[k] + dp[i][k] + dp[k][j]);
                }
                dp[i][j] = w;
            }
        }
        return dp[0][n - 1];
    }
}