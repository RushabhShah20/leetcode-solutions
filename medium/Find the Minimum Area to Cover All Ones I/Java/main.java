// Problem: Find the Minimum Area to Cover All Ones I
// Link to the problem: https://leetcode.com/problems/find-the-minimum-area-to-cover-all-ones-i/
class Solution {
    public int minimumArea(int[][] grid) {
        int m = grid.length, n = grid[0].length;
        int a = Integer.MAX_VALUE, b = Integer.MAX_VALUE, c = Integer.MIN_VALUE, d = Integer.MIN_VALUE;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    a = Math.min(a, i);
                    b = Math.min(b, j);
                    c = Math.max(c, i);
                    d = Math.max(d, j);
                }
            }
        }
        return (c - a + 1) * (d - b + 1);
    }
}