// Problem: Minimum Deletions to Make String Balanced
// Link to the problem: https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/
class Solution {
    public int minimumDeletions(String s) {
        int ans = 0, count = 0;
        for (final char c : s.toCharArray()) {
            if (c == 'b') {
                count++;
            } else {
                ans = Math.min(ans + 1, count);
            }
        }
        return ans;
    }
}