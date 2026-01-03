// Problem: Number of Ways to Paint N × 3 Grid
// Link to the problem: https://leetcode.com/problems/number-of-ways-to-paint-n-3-grid/
class Solution {
    public int numOfWays(int n) {
        final long mod = 1000000007;
        long a = 6, b = 6;
        for (int i = 1; i < n; i++) {
            final long x = ((3 * a) + (2 * b)) % mod;
            final long y = ((2 * a) + (2 * b)) % mod;
            a = x;
            b = y;
        }
        final int ans = (int) ((a + b) % mod);
        return ans;
    }
}