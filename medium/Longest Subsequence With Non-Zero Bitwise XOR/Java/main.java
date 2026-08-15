// Problem: Longest Subsequence With Non-Zero Bitwise XOR
// Link to the problem: https://leetcode.com/problems/longest-subsequence-with-non-zero-bitwise-xor/
class Solution {
    public int longestSubsequence(int[] nums) {
        final int n = nums.length;
        int x = 0;
        boolean y = true;
        for (int i = 0; i < n; i++) {
            x ^= nums[i];
            if (nums[i] > 0) {
                y = false;
            }
        }
        if (x > 0) {
            return n;
        }
        final int ans = y ? 0 : n - 1;
        return ans;
    }
}