// Problem: Process String with Special Operations I
// Link to the problem: https://leetcode.com/problems/process-string-with-special-operations-i/
class Solution {
    public String processStr(String s) {
        final int n = s.length();
        StringBuilder ans = new StringBuilder();
        for (int i = 0; i < n; i++) {
            final char c = s.charAt(i);
            if (c == '*') {
                if (ans.length() > 0) {
                    ans.deleteCharAt(ans.length() - 1);
                }
            } else if (c == '#') {
                ans.append(ans.toString());
            } else if (c == '%') {
                ans.reverse();
            } else {
                ans.append(c);
            }
        }
        return ans.toString();
    }
}