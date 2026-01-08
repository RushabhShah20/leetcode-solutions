// Problem: Find Greatest Common Divisor of Array
// Link to the problem: https://leetcode.com/problems/find-greatest-common-divisor-of-array/
class Solution {
    public int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    public int findGCD(int[] nums) {
        int maxVal = 0, minVal = 1001;
        for (final int num : nums) {
            maxVal = Math.max(maxVal, num);
            minVal = Math.min(minVal, num);
        }
        final int ans = gcd(maxVal, minVal);
        return ans;
    }
}