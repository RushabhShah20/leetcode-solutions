// Problem: Maximum Number of Jumps to Reach the Last Index
// Link to the problem: https://leetcode.com/problems/maximum-number-of-jumps-to-reach-the-last-index/
class Solution {
  int maximumJumps(List<int> nums, int target) {
    final int n = nums.length;
    List<int> dp = new List.filled(n, -1);
    dp[0] = 0;
    for (int i = 1; i < n; i++) {
      for (int j = 0; j < i; j++) {
        if ((nums[i] - nums[j]).abs() <= target && dp[j] != -1) {
          dp[i] = max(dp[i], dp[j] + 1);
        }
      }
    }
    final int ans = dp[n - 1];
    return ans;
  }
}
