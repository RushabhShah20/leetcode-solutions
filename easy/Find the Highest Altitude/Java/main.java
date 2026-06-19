// Problem: Find the Highest Altitude
// Link to the problem: https://leetcode.com/problems/find-the-highest-altitude/
class Solution {
    public int largestAltitude(int[] gain) {
        final int n = gain.length;
        int ans = 0, x = 0;
        for (int i = 0; i < n; i++) {
            x += gain[i];
            ans = Math.max(ans, x);
        }
        return ans;
    }
}