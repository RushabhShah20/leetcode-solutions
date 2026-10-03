// Problem: Longest Valid Parentheses
// Link to the problem: https://leetcode.com/problems/longest-valid-parentheses/
class Solution {
    public int longestValidParentheses(String s) {
        final int n = s.length();
        int ans = 0, x = 0, y = 0;
        for (int i = 0; i < n; i++) {
            if (s.charAt(i) == '(') {
                x++;
            } else {
                y++;
            }
            if (x == y) {
                ans = Math.max(ans, x + y);
            } else if (y > x) {
                x = 0;
                y = 0;
            }
        }
        x = 0;
        y = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (s.charAt(i) == '(') {
                x++;
            } else {
                y++;
            }
            if (x == y) {
                ans = Math.max(ans, x + y);
            } else if (x > y) {
                x = 0;
                y = 0;
            }
        }
        return ans;
    }
}