// Problem: Count Servers that Communicate
// Link to the problem: https://leetcode.com/problems/count-servers-that-communicate/
class Solution {
    fun countServers(grid: Array<IntArray>): Int {
        val m: Int = grid.size
        val n: Int = grid[0].size
        val rows: IntArray = IntArray(m)
        val cols: IntArray = IntArray(n)
        for (i: Int in 0 until m) {
            for (j: Int in 0 until n) {
                if (grid[i][j] == 1) {
                    rows[i]++
                    cols[j]++
                }
            }
        }
        var ans: Int = 0
        for (i: Int in 0 until m) {
            for (j: Int in 0 until n) {
                if (grid[i][j] == 1) {
                    if (rows[i] > 1 || cols[j] > 1) {
                        ans++
                    }
                }
            }
        }
        return ans
    }
}