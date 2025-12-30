// Problem: K Radius Subarray Averages
// Link to the problem: https://leetcode.com/problems/k-radius-subarray-averages/
class Solution {
    public int[] getAverages(int[] nums, int k) {
        final int n = nums.length, m = (2 * k) + 1;
        int[] ans = new int[n];
        Arrays.fill(ans, -1);
        long sum = 0;
        for (int i = 0; i < n; i++) {
            if (i >= m) {
                sum += nums[i];
                sum -= nums[i - m];
            } else {
                sum += nums[i];
            }
            if (i >= m - 1) {
                ans[i - k] = (int) (sum / (long) (m));
            }
        }
        return ans;
    }
}