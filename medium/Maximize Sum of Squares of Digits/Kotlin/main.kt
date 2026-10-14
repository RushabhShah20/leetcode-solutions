// Problem: Maximize Sum of Squares of Digits
// Link to the problem: https://leetcode.com/problems/maximize-sum-of-squares-of-digits/
class Solution {
    fun maxSumOfSquares(num: Int, sum: Int): String {
        if (sum < 1 || sum > 9 * num) {
            return ""
        }
        var n: Int = num
        val ans: StringBuilder = StringBuilder()
        val x: Int = sum / 9
        val y: Int = sum % 9
        ans.append("9".repeat(x))
        n -= x
        if (y > 0) {
            ans.append(y)
            n--
        }
        ans.append("0".repeat(n))
        return ans.toString()
    }
}