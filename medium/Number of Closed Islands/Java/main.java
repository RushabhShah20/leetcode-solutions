// Problem: Number of Closed Islands
// Link to the problem: https://leetcode.com/problems/number-of-closed-islands/
class Solution {
    public boolean dfs(final int x, final int y, final int n, final int m, int[][] grid) {
        if (x < 0 || x >= n || y < 0 || y >= m) {
            return false;
        }
        if (grid[x][y] == 1) {
            return true;
        }
        grid[x][y] = 1;
        final boolean a = dfs(x - 1, y, n, m, grid);
        final boolean b = dfs(x + 1, y, n, m, grid);
        final boolean c = dfs(x, y - 1, n, m, grid);
        final boolean d = dfs(x, y + 1, n, m, grid);
        final boolean ans = a && b && c && d;
        return ans;
    }

    public int closedIsland(int[][] grid) {
        final int n = grid.length, m = grid[0].length;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 0) {
                    if (dfs(i, j, n, m, grid)) {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
}