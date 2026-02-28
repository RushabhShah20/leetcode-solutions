// Problem: Concatenation of Consecutive Binary Numbers
// Link to the problem: https://leetcode.com/problems/concatenation-of-consecutive-binary-numbers/
class Solution {
    public int concatenatedBinary(int n) {
        final long mod = 1000000007;
        long ans = 0;
        for (int i = 1; i <= n; i++) {
            int x = i;
            while (x > 0) {
                x /= 2;
                ans *= 2;
            }
            ans = (ans + i) % mod;
        }
        return (int) ans;
    }
}