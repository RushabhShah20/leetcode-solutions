// Problem: Check if Strings Can be Made Equal With Operations II
// Link to the problem: https://leetcode.com/problems/check-if-strings-can-be-made-equal-with-operations-ii/
class Solution {
    public boolean checkStrings(String s1, String s2) {
        final int n = s1.length();
        int[] x = new int[52], y = new int[52];
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                x[s1.charAt(i) - 'a']++;
                y[s2.charAt(i) - 'a']++;
            } else {
                x[s1.charAt(i) - 'a' + 26]++;
                y[s2.charAt(i) - 'a' + 26]++;
            }
        }
        for (int i = 0; i < 52; i++) {
            if (x[i] != y[i]) {
                return false;
            }
        }
        return true;
    }
}