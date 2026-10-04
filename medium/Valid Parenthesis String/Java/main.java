// Problem: Valid Parenthesis String
// Link to the problem: https://leetcode.com/problems/valid-parenthesis-string/
class Solution {
    public boolean checkValidString(String s) {
        final int n = s.length();
        int x = 0, y = 0;
        for (int i = 0; i < n; i++) {
            if (s.charAt(i) == '(' || s.charAt(i) == '*') {
                x++;
            } else {
                x--;
            }
            if (s.charAt(n - 1 - i) == ')' || s.charAt(n - 1 - i) == '*') {
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