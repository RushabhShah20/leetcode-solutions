// Problem: Find Greatest Common Divisor of Array
// Link to the problem: https://leetcode.com/problems/find-greatest-common-divisor-of-array/
class Solution {
    public int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    public int findGCD(int[] nums) {
        final int n = nums.length;
        int mx = 0, mn = 1001;
        for (int i = 0; i < n; i++) {
            mx = Math.max(mx, nums[i]);
            mn = Math.min(mn, nums[i]);
        }
        final int ans = gcd(mx, mn);
        return ans;
    }
}