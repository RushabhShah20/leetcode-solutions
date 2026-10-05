// Problem: Score of Parentheses
// Link to the problem: https://leetcode.com/problems/score-of-parentheses/
class Solution {
    fun scoreOfParentheses(s: String): Int {
        val n: Int = s.length;
        var ans: Int = 0;
        var x: Int = 0;
        for (i: Int in 0 until n) {
            if (s[i] == '(') {
                x++;
            } else {
                x--;
                if (s[i - 1] == '(') {
                    ans += 1 shl x;
                }
            }
        }
        return ans;
    }
}