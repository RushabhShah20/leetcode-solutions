// Problem: Length of Longest Subarray With at Most K Frequency
// Link to the problem: https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/
class Solution {
  int maxSubarrayLength(List<int> nums, int k) {
    final int n = nums.length;
    int i = 0, j = 0, ans = 0;
    Map<int, int> m = new Map<int, int>();
    while (j < n) {
      m[nums[j]] = (m[nums[j]] ?? 0) + 1;
      while (m[nums[j]]! > k && i < n) {
        m[nums[i]] = m[nums[i]]! - 1;
        i++;
      }
      ans = max(ans, j - i + 1);
      j++;
    }
    return ans;
  }
}
