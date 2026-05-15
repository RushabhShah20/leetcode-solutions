// Problem: Find Minimum in Rotated Sorted Array
// Link to the problem: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
class Solution {
    public int findMin(int[] nums) {
        final int n = nums.length;
        int ans = 5001, l = 0, r = n - 1;
        while (l <= r) {
            final int m = l + (r - l) / 2;
            if (nums[l] <= nums[m]) {
                ans = Math.min(ans, nums[l]);
                l = m + 1;
            } else {
                r = m - 1;
                ans = Math.min(ans, nums[m]);
            }
        }
        return ans;
    }
}