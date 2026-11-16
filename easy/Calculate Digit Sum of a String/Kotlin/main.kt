// Problem: Calculate Digit Sum of a String
// Link to the problem: https://leetcode.com/problems/calculate-digit-sum-of-a-string/
class Solution {
    fun digitSum(s: String, k: Int): String {
        var ans: String = s
        while (ans.length > k) {
            val t: StringBuilder = StringBuilder()
            val n: Int = ans.length
            for (i in 0 until n step k) {
                var x: Int = 0
                for (j in i until minOf(i + k, n)) {
                    x += ans[j] - '0'
                }
                t.append(x)
            }
            ans = t.toString()
        }
        return ans
    }
}