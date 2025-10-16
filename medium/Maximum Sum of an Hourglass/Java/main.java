// Problem: Maximum Sum of an Hourglass
// Link to the problem: https://leetcode.com/problems/maximum-sum-of-an-hourglass/
class Solution {
    public int maxSum(int[][] grid) {
        int m = grid.length, n = grid[0].length, ans = 0;
        for (int i = 1; i < m - 1; i++) {
            for (int j = 1; j < n - 1; j++) {
                int x = grid[i - 1][j - 1] + grid[i - 1][j] + grid[i - 1][j + 1] + grid[i][j] + grid[i + 1][j - 1]
                        + grid[i + 1][j] + grid[i + 1][j + 1];
                ans = Math.max(ans, x);
            }
        }
        return ans;
    }
}