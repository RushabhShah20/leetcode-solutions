// Problem: Number of Closed Islands
// Link to the problem: https://leetcode.com/problems/number-of-closed-islands/
class Solution {
    fun dfs(x: Int, y: Int, n: Int, m: Int, grid: Array<IntArray>): Boolean {
        if (x < 0 || x >= n || y < 0 || y >= m) {
            return false;
        }
        if (grid[x][y] == 1) {
            return true;
        }
        grid[x][y] = 1;
        val a: Boolean = dfs(x - 1, y, n, m, grid);
        val b: Boolean = dfs(x + 1, y, n, m, grid);
        val c: Boolean = dfs(x, y - 1, n, m, grid);
        val d: Boolean = dfs(x, y + 1, n, m, grid);
        val ans: Boolean = a && b && c && d;
        return ans;
    }

    fun closedIsland(grid: Array<IntArray>): Int {
        val n: Int = grid.size
        val m: Int = grid[0].size
        var ans: Int = 0
        for (i: Int in 0 until n) {
            for (j: Int in 0 until m) {
                if (grid[i][j] == 0) {
                    if (dfs(i, j, n, m, grid)) {
                        ans++
                    }
                }
            }
        }
        return ans;
    }
}