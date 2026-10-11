// Problem: Sum of Squares of Special Elements
// Link to the problem: https://leetcode.com/problems/sum-of-squares-of-special-elements/
class Solution {
    public int sumOfSquares(int[] nums) {
        final int n = nums.length;
        int ans = 0;
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                ans += nums[i - 1] * nums[i - 1];
                if (i * i != n) {
                    ans += nums[n / i - 1] * nums[n / i - 1];
                }
            }
        }
        return ans;
    }
}