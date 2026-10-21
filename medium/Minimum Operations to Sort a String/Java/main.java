// Problem: Minimum Operations to Sort a String
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-sort-a-string/
class Solution {
    public int minOperations(String s) {
        final int n = s.length();
        char mn = 'z', mx = 'a';
        boolean a = true;
        for (int i = 0; i < n; i++) {
            if (mx < s.charAt(i)) {
                mx = s.charAt(i);
            }
            if (mn > s.charAt(i)) {
                mn = s.charAt(i);
            }
            if (i > 0 && s.charAt(i - 1) > s.charAt(i)) {
                a = false;
            }
        }
        if (a) {
            return 0;
        }
        if (n == 2) {
            return -1;
        }
        if (s.charAt(0) == mn || s.charAt(n - 1) == mx) {
            return 1;
        }
        for (int i = 1; i < n - 1; i++) {
            if (s.charAt(i) == mn || s.charAt(i) == mx) {
                return 2;
            }
        }
        return 3;
    }
}