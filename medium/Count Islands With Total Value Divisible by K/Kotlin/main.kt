// Problem: Count Islands With Total Value Divisible by K
// Link to the problem: https://leetcode.com/problems/count-islands-with-total-value-divisible-by-k/
class Solution {
    fun dfs(x: Int, y: Int, n: Int, m: Int, grid: Array<IntArray>): Long {
        var z: Long = grid[x][y].toLong()
        grid[x][y] = 0
        val a: IntArray = intArrayOf(-1, 0, 1, 0)
        val b: IntArray = intArrayOf(0, 1, 0, -1)
        for (i: Int in 0 until 4) {
            val c: Int = x + a[i]
            val d: Int = y + b[i]
            if (c >= 0 && c < n && d >= 0 && d < m && grid[c][d] > 0) {
                z += dfs(c, d, n, m, grid)
            }
        }
        return z
    }

    fun countIslands(grid: Array<IntArray>, k: Int): Int {
        val n: Int = grid.size
        val m: Int = grid[0].size
        var ans: Int = 0
        for (i: Int in 0 until n) {
            for (j: Int in 0 until m) {
                if (grid[i][j] > 0 && dfs(i, j, n, m, grid) % k.toLong() == 0.toLong()) {
                    ans++
                }
            }
        }
        return ans;
    }
}