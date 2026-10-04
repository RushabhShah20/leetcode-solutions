// Problem: Valid Parenthesis String
// Link to the problem: https://leetcode.com/problems/valid-parenthesis-string/
class Solution {
    fun checkValidString(s: String): Boolean {
        val n: Int = s.length;
        var x: Int = 0;
        var y: Int = 0;
        for (i: Int in 0 until n) {
            if (s[i] == '(' || s[i] == '*') {
                x++;
            } else {
                x--;
            }
            if (s[n - 1 - i] == ')' || s[n - 1 - i] == '*') {
                y++;
            } else {
                y--;
            }
            if (x < 0 || y < 0) {
                return false;
            }
        }
        return true;
    }
}