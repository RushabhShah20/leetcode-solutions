// Problem: Smallest Palindromic Rearrangement I
// Link to the problem: https://leetcode.com/problems/smallest-palindromic-rearrangement-i/
class Solution {
    public String smallestPalindrome(String s) {
        char[] ans = s.toCharArray();
        final int n = ans.length;
        int[] a = new int[26];
        for (int i = 0; i < n / 2; i++) {
            a[ans[i] - 'a']++;
        }
        int l = 0, r = n - 1;
        for (int i = 0; i < 26; i++) {
            while (a[i] > 0) {
                final char c = (char) ('a' + i);
                ans[l] = c;
                ans[r] = c;
                l++;
                r--;
                a[i]--;
            }
        }
        return new String(ans);
    }
}