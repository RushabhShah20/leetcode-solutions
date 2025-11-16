// Problem: Maximize Expression of Three Elements
// Link to the problem: https://leetcode.com/problems/maximize-expression-of-three-elements/
class Solution {
    public int maximizeExpressionOfThree(int[] nums) {
        int n = nums.length;
        Arrays.sort(nums);
        return nums[n - 1] + nums[n - 2] - nums[0];
    }
}