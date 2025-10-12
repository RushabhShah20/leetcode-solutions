// Problem: Longest Fibonacci Subarray
// Link to the problem: https://leetcode.com/problems/longest-fibonacci-subarray/
class Solution {
    public int longestSubarray(int[] nums) {
        int ans = 2, n = nums.length, count = 2;
        for (int i = 2; i < n; i++) {
            if (nums[i] == nums[i - 1] + nums[i - 2]) {
                count++;
            } else {
                ans = Math.max(ans, count);
                count = 2;
            }
        }
        ans = Math.max(ans, count);
        return ans;
    }
}