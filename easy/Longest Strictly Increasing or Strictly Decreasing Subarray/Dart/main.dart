// Problem: Longest Strictly Increasing or Strictly Decreasing Subarray
// Link to the problem: https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray/
class Solution {
  int longestMonotonicSubarray(List<int> nums) {
    final int n = nums.length;
    int a = 1, b = 1, c = 1, d = 1;
    for (int i = 1; i < n; i++) {
      if (nums[i] > nums[i - 1]) {
        c++;
        a = max(a, c);
        d = 1;
      } else if (nums[i] < nums[i - 1]) {
        d++;
        b = max(b, d);
        c = 1;
      } else {
        c = 1;
        d = 1;
      }
    }
    final int ans = max(a, b);
    return ans;
  }
}
