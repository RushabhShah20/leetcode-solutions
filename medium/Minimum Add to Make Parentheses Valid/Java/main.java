// Problem: Minimum Add to Make Parentheses Valid
// Link to the problem: https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/
class Solution {
    public int minAddToMakeValid(String s) {
        final int n = s.length();
        int x = 0, y = 0;
        for (int i = 0; i < n; i++) {
            if (s.charAt(i) == '(') {
                x++;
            } else {
                if (x > 0) {
                    x--;
                } else {
                    y++;
                }
            }
        }
        final int ans = x + y;
        return ans;
    }
}