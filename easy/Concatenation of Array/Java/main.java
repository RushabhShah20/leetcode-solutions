// Problem: Concatenation of Array
// Link to the problem: https://leetcode.com/problems/concatenation-of-array/
class Solution {
    public int[] getConcatenation(int[] nums) {
        int[] ans = new int[nums.length * 2];
        for (int i = 0; i < ans.length; i++) {
            if (i < nums.length) {
                ans[i] = nums[i];
            } else {
                ans[i] = nums[i - nums.length];
            }
        }
        return ans;
    }
}