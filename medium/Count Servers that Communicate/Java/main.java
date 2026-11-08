// Problem: Count Servers that Communicate
// Link to the problem: https://leetcode.com/problems/count-servers-that-communicate/
class Solution {
    public int countServers(int[][] grid) {
        final int m = grid.length, n = grid[0].length;
        int[] rows = new int[m], cols = new int[n];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    rows[i]++;
                    cols[j]++;
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    if (rows[i] > 1 || cols[j] > 1) {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
}