// Problem: Two Furthest Houses With Different Colors
// Link to the problem: https://leetcode.com/problems/two-furthest-houses-with-different-colors/
class Solution {
    public int maxDistance(int[] colors) {
        final int n = colors.length;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (colors[i] != colors[j]) {
                    ans = Math.max(Math.abs(i - j), ans);
                }
            }
        }
        return ans;
    }
}