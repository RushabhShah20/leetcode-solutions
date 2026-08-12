// Problem: Length of Longest Subarray With at Most K Frequency
// Link to the problem: https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/
class Solution {
    public int maxSubarrayLength(int[] nums, int k) {
        final int n = nums.length;
        int i = 0, j = 0, ans = 0;
        Map<Integer, Integer> m = new HashMap<>();
        while (j < n) {
            m.put(nums[j], m.getOrDefault(nums[j], 0) + 1);
            while (m.get(nums[j]) > k && i < n) {
                m.put(nums[i], m.getOrDefault(nums[i], 0) - 1);
                i++;
            }
            ans = Math.max(ans, j - i + 1);
            j++;
        }
        return ans;
    }
}