// Problem: Maximum Nesting Depth of the Parentheses
// Link to the problem: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
class Solution {
    public int maxDepth(String s) {
        final int n = s.length();
        int ans = 0, x = 0;
        for (int i = 0; i < n; i++) {
            if (s.charAt(i) == '(') {
                x++;
            }
            if (s.charAt(i) == ')') {
                x--;
            }
            ans = Math.max(ans, x);
        }
        return ans;
    }
}