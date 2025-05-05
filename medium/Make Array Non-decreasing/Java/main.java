// Problem: Make Array Non-decreasing
// Link to the problem: https://leetcode.com/problems/make-array-non-decreasing/
class Solution {
    public int maximumPossibleSize(int[] nums) {
        int ans = 0;
        int max = Integer.MIN_VALUE;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] >= max) {
                max = nums[i];
                ans++;
            }
        }
        return ans;
    }
}