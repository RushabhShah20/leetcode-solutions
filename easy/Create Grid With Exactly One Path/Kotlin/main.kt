// Problem: Create Grid With Exactly One Path
// Link to the problem: https://leetcode.com/problems/create-grid-with-exactly-one-path/
class Solution {
    fun createGrid(m: Int, n: Int): Array<String> {
        val grid: Array<CharArray> = Array<CharArray>(m) { CharArray(n) { '#' } }
        for (i: Int in 0 until n) {
            grid[0][i] = '.'
        }
        for (i: Int in 0 until m) {
            grid[i][n - 1] = '.'
        }
        val ans: Array<String> = Array<String>(m) { i: Int -> String(grid[i]) }
        return ans
    }
}