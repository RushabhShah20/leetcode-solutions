// Problem: Build Array from Permutation
// Link to the problem: https://leetcode.com/problems/build-array-from-permutation/
class Solution {
    public int[] buildArray(int[] nums) {
        int ans[] = new int[nums.length];
        ans[0] = nums[nums[0]];
        for (int i = 1; i < nums.length; i++) {
            ans[i] = nums[nums[i]];
        }
        return ans;
    }
}