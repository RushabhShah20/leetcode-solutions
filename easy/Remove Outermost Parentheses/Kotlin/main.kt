// Problem: Remove Outermost Parentheses
// Link to the problem: https://leetcode.com/problems/remove-outermost-parentheses/
class Solution {
    fun removeOuterParentheses(s: String): String {
        val n: Int = s.length
        var x: Int = 0
        var ans: String = ""
        for (i: Int in 0 until n) {
            if (s[i] == ')') {
                x--
            }
            if (x > 0) {
                ans += s[i]
            }
            if (s[i] == '(') {
                x++
            }
        }
        return ans
    }
}