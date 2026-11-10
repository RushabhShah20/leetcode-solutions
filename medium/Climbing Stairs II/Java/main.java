// Problem: Climbing Stairs II
// Link to the problem: https://leetcode.com/problems/climbing-stairs-ii/
class Solution {
    public int climbStairs(int n, int[] costs) {
        int a = 0, b = 0, c = 0;
        for (int i = 0; i < n; i++) {
            final int d = Math.min(a + 9, Math.min(b + 4, c + 1)) + costs[i];
            a = b;
            b = c;
            c = d;
        }
        final int ans = c;
        return ans;
    }
}