// Problem: Remove Outermost Parentheses
// Link to the problem: https://leetcode.com/problems/remove-outermost-parentheses/
class Solution {
    public String removeOuterParentheses(String s) {
        final int n = s.length();
        int x = 0;
        StringBuilder ans = new StringBuilder();
        for (int i = 0; i < n; i++) {
            if (s.charAt(i) == ')') {
                x--;
            }
            if (x > 0) {
                ans.append(s.charAt(i));
            }
            if (s.charAt(i) == '(') {
                x++;
            }
        }
        return ans.toString();
    }
}