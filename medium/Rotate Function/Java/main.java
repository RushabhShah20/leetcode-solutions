// Problem: Rotate Function
// Link to the problem: https://leetcode.com/problems/rotate-function/
class Solution {
    public int maxRotateFunction(int[] nums) {
        final int n = nums.length;
        int x = 0, y = 0;
        for (int i = 0; i < n; i++) {
            x += nums[i];
            y += i * nums[i];
        }
        int ans = y;
        for (int i = n - 1; i >= 0; i--) {
            y = y + x - n * nums[i];
            ans = Math.max(ans, y);
        }
        return (int) ans;
    }
}