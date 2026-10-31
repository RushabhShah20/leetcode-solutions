// Problem: Twisted Mirror Path Count
// Link to the problem: https://leetcode.com/problems/twisted-mirror-path-count/
class Solution {
    fun uniquePaths(grid: Array<IntArray>): Int {
        val k: Int = 1000000007
        val n: Int = grid.size
        val m: Int = grid[0].size
        var a: Array<IntArray> = Array<IntArray>(m) { IntArray(2) }
        a[0][0] = 1
        for (i: Int in 0 until n) {
            for (j: Int in 0 until m) {
                if (i > 0) {
                    if (grid[i - 1][j] == 0) {
                        a[j][0] = (a[j][0] + a[j][1]) % k
                    } else {
                        a[j][0] = a[j][1]
                    }
                }
                if (j > 0) {
                    if (grid[i][j - 1] == 0) {
                        a[j][1] = (a[j - 1][0] + a[j - 1][1]) % k
                    } else {
                        a[j][1] = a[j - 1][0]
                    }
                }
            }
        }
        val ans: Int = (a[m - 1][0] + a[m - 1][1]) % k
        return ans
    }
}