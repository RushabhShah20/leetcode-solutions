// Problem: Count Negative Numbers in a Sorted Matrix
// Link to the problem: https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/
class Solution {
    public int countNegatives(int[][] grid) {
        final int m = grid.length, n = grid[0].length;
        int ans = 0, i = m - 1, j = 0;
        while (i >= 0 && j < n) {
            if (grid[i][j] < 0) {
                ans += (n - j);
                i--;
            } else {
                j++;
            }
        }
        return ans;
    }
}