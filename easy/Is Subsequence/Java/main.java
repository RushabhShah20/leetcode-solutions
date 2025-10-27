// Problem: Is Subsequence
// Link to the problem: https://leetcode.com/problems/is-subsequence/
class Solution {
    public boolean isSubsequence(String s, String t) {
        int n = t.length(), m = s.length(), i, j;
        for (i = 0, j = 0; i < n && j < m; i++) {
            if (t.charAt(i) == s.charAt(j)) {
                j++;
            }
        }
        if (j < m) {
            return false;
        } else {
            return true;
        }
    }
}