// Problem: Minimum Changes to Make K Semi-palindromes
// Link to the problem: https://leetcode.com/problems/minimum-changes-to-make-k-semi-palindromes/
class Solution {
    fun minimumChanges(s: String, k: Int): Int {
        val n: Int = s.length
        val a: Array<IntArray> = Array<IntArray>(n) { _: Int -> IntArray(n) }
        for (i: Int in 0 until n) {
            for (j: Int in (i + 1) until n) {
                val m: Int = j - i + 1
                var x: Int = m
                for (p: Int in 1 until m) {
                    if (m % p != 0) {
                        continue
                    }
                    var y: Int = 0
                    for (q: Int in 0 until p) {
                        var l: Int = i + q
                        var r: Int = j - p + q + 1
                        while (l < r) {
                            if (s[l] != s[r]) {
                                y++
                            }
                            l += p
                            r -= p
                        }
                    }
                    x = minOf(x, y)
                }
                a[i][j] = x
            }
        }
        val dp: Array<IntArray> = Array<IntArray>(n) { _: Int -> IntArray(k + 1) { _: Int -> n } }
        for (i: Int in 1 until n) {
            dp[i][1] = a[0][i]
        }
        for (i: Int in 0 until n) {
            for (p: Int in 2..k) {
                for (j: Int in ((p - 1) shl 1) until i) {
                    dp[i][p] = minOf(dp[i][p], dp[j - 1][p - 1] + a[j][i])
                }
            }
        }
        val ans: Int = dp[n - 1][k]
        return ans
    }
}