// Problem: Special Positions in a Binary Matrix
// Link to the problem: https://leetcode.com/problems/special-positions-in-a-binary-matrix/
class Solution {
    fun numSpecial(mat: Array<IntArray>): Int {
        val m: Int = mat.size
        val n: Int = mat[0].size
        var ans: Int = 0
        val rows: IntArray = IntArray(m)
        val cols: IntArray = IntArray(n)
        for (i: Int in 0 until m) {
            for (j: Int in 0 until n) {
                if (mat[i][j] == 1) {
                    rows[i]++
                    cols[j]++
                }
            }
        }
        for (i: Int in 0 until m) {
            for (j: Int in 0 until n) {
                if (rows[i] == 1 && cols[j] == 1 && mat[i][j] == 1) {
                    ans++
                }
            }
        }
        return ans
    }
}