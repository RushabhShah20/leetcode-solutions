// Problem: Longest Fibonacci Subarray
// Link to the problem: https://leetcode.com/problems/longest-fibonacci-subarray/
class Solution {
  int longestSubarray(List<int> nums) {
    int ans = 2, n = nums.length, count = 2;
    for (int i = 2; i < n; i++) {
      if (nums[i] == nums[i - 1] + nums[i - 2]) {
        count++;
      } else {
        ans = max(ans, count);
        count = 2;
      }
    }
    ans = max(ans, count);
    return ans;
  }
}
