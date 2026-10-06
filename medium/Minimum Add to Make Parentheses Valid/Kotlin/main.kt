// Problem: Minimum Add to Make Parentheses Valid
// Link to the problem: https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/
class Solution {
    fun minAddToMakeValid(s: String): Int {
        val n: Int = s.length;
        var x: Int = 0;
        var y: Int = 0;
        for (i: Int in 0 until n) {
            if (s[i] == '(') {
                x++;
            } else {
                if (x > 0) {
                    x--;
                } else {
                    y++;
                }
            }
        }
        val ans: Int = x + y;
        return ans;
    }
}