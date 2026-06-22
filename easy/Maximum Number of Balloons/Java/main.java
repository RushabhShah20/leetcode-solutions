// Problem: Maximum Number of Balloons
// Link to the problem: https://leetcode.com/problems/maximum-number-of-balloons/
class Solution {
    public int maxNumberOfBalloons(String text) {
        final int n = text.length();
        int ans = 100000;
        int[] a = new int[26];
        for (int i = 0; i < n; i++) {
            a[text.charAt(i) - 'a']++;
        }
        ans = Math.min(ans, a[1]);
        ans = Math.min(ans, a[0]);
        ans = Math.min(ans, a[11] / 2);
        ans = Math.min(ans, a[14] / 2);
        ans = Math.min(ans, a[13]);
        return ans;
    }
}