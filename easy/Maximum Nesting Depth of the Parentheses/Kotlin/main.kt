// Problem: Maximum Nesting Depth of the Parentheses
// Link to the problem: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
class Solution {
    fun maxDepth(s: String): Int {
        val n: Int = s.length;
        var ans: Int = 0;
        var x: Int = 0;
        for (i: Int in 0 until n) {
            if (s[i] == '(') {
                x++;
            }
            if (s[i] == ')') {
                x--;
            }
            ans = maxOf(ans, x);
        }
        return ans;
    }
}