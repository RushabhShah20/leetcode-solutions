// Problem: Left and Right Sum Differences
// Link to the problem: https://leetcode.com/problems/left-and-right-sum-differences/
class Solution {
    public int[] leftRightDifference(int[] nums) {
        int[] ans = new int[nums.length], left = new int[nums.length], right = new int[nums.length];
        int sum = 0;
        for (int i = 0; i < nums.length; i++) {
            left[i] = sum;
            sum += nums[i];
        }
        sum = 0;
        for (int i = nums.length - 1; i >= 0; i--) {
            right[i] = sum;
            sum += nums[i];
        }
        for (int i = 0; i < nums.length; i++) {
            ans[i] = Math.abs(left[i] - right[i]);
        }
        return ans;
    }
}