// Problem: Squares of a Sorted Array
// Link to the problem: https://leetcode.com/problems/squares-of-a-sorted-array/
class Solution {
    public int[] sortedSquares(int[] nums) {
        final int n = nums.length;
        int[] ans = new int[n];
        int l = 0, r = n - 1, i = n - 1;
        while (l <= r) {
            final int x = nums[l] * nums[l], y = nums[r] * nums[r];
            if (x > y) {
                ans[i] = x;
                l++;
            } else {
                ans[i] = y;
                r--;
            }
            i--;
        }
        return ans;
    }
}