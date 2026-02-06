// Problem: Minimum Removals to Balance Array
// Link to the problem: https://leetcode.com/problems/minimum-removals-to-balance-array/
class Solution {
    public int minRemoval(int[] nums, int k) {
        final int n = nums.length;
        int i = 0, ans = 0;
        Arrays.sort(nums);
        for (int j = 0; j < n; j++) {
            while ((long) nums[j] > (long) nums[i] * k) {
                i++;
            }
            ans = Math.max(ans, j - i + 1);
        }
        ans = n - ans;
        return ans;
    }
}