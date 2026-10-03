// Problem: Longest Valid Parentheses
// Link to the problem: https://leetcode.com/problems/longest-valid-parentheses/
class Solution {
    fun longestValidParentheses(s: String): Int {
        val n: Int = s.length;
        var ans: Int = 0;
        var x: Int = 0;
        var y: Int = 0;
        for (i: Int in 0 until n) {
            if (s[i] == '(') {
                x++;
            } else {
                y++;
            }
            if (x == y) {
                ans = maxOf(ans, x + y);
            } else if (y > x) {
                x = 0;
                y = 0;
            }
        }
        x = 0;
        y = 0;
        for (i: Int in n - 1 downTo 0) {
            if (s[i] == '(') {
                x++;
            } else {
                y++;
            }
            if (x == y) {
                ans = maxOf(ans, x + y);
            } else if (x > y) {
                x = 0;
                y = 0;
            }
        }
        return ans;
    }
}