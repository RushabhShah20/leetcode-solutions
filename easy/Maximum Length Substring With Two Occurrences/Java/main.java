// Problem: Maximum Length Substring With Two Occurrences
// Link to the problem: https://leetcode.com/problems/maximum-length-substring-with-two-occurrences/
class Solution {
    public int maximumLengthSubstring(String s) {
        final int n = s.length();
        int i = 0, j = 0, ans = 0;
        int[] a = new int[26];
        while (j < n) {
            a[s.charAt(j) - 'a']++;
            while (a[s.charAt(j) - 'a'] > 2 && i < n) {
                a[s.charAt(i) - 'a']--;
                i++;
            }
            ans = Math.max(ans, j - i + 1);
            j++;
        }
        return ans;
    }
}