// Problem: Minimum Number of Changes to Make Binary String Beautiful
// Link to the problem: https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful/
class Solution {
    public int minChanges(String s) {
        final int n = s.length();
        int ans = 0;
        for (int i = 1; i < n; i += 2) {
            if (s.charAt(i) != s.charAt(i - 1)) {
                ans++;
            }
        }
        return ans;
    }
}