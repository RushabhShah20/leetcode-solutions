// Problem: Minimum XOR Path in a Grid
// Link to the problem: https://leetcode.com/problems/minimum-xor-path-in-a-grid/
class Solution {
    fun minCost(grid: Array<IntArray>): Int {
        val m: Int = grid.size
        val n: Int = grid[0].size
        val dp: Array<Array<IntArray>> = Array(m) { Array(n) { IntArray(1024) } }
        dp[0][0][grid[0][0]] = 1
        for (i: Int in 1 until m) {
            for (k: Int in 0 until 1024) {
                if (dp[i - 1][0][k] == 1) {
                    dp[i][0][k xor grid[i][0]] = 1
                }
            }
        }
        for (j: Int in 1 until n) {
            for (k: Int in 0 until 1024) {
                if (dp[0][j - 1][k] == 1) {
                    dp[0][j][k xor grid[0][j]] = 1
                }
            }
        }
        for (i: Int in 1 until m) {
            for (j: Int in 1 until n) {
                for (k: Int in 0 until 1024) {
                    if (dp[i - 1][j][k] == 1 || dp[i][j - 1][k] == 1) {
                        dp[i][j][k xor grid[i][j]] = 1
                    }
                }
            }
        }
        for (k: Int in 0 until 1024) {
            if (dp[m - 1][n - 1][k] == 1) {
                return k
            }
        }
        return 0
    }
}