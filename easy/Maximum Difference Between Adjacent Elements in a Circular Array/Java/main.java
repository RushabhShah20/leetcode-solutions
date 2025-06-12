// Problem: Maximum Difference Between Adjacent Elements in a Circular Array
// Link to the problem: https://leetcode.com/problems/maximum-difference-between-adjacent-elements-in-a-circular-array/
class Solution {
    public int maxAdjacentDistance(int[] nums) {
        int ans = 0;
        for (int i = 1; i < nums.length; i++) {
            if (Math.abs(nums[i] - nums[i - 1]) > ans) {
                ans = Math.abs(nums[i] - nums[i - 1]);
            }
        }
        if (Math.abs(nums[nums.length - 1] - nums[0]) > ans) {
            ans = Math.abs(nums[nums.length - 1] - nums[0]);
        }
        return ans;
    }
}