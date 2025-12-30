// Problem: Count Number of Pairs With Absolute Difference K
// Link to the problem: https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/
class Solution {
    public int countKDifference(int[] nums, int k) {
        final int n = nums.length;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (Math.abs(nums[i] - nums[j]) == k) {
                    ans++;
                }
            }
        }
        return ans;
    }
}