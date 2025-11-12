// Problem: Maximum Difference Between Increasing Elements
// Link to the problem: https://leetcode.com/problems/maximum-difference-between-increasing-elements/
class Solution {
  int maximumDifference(List<int> nums) {
    int n = nums.length, res = 0;
    List<int> pre = new List.filled(n, 0), suff = new List.filled(n, 0);
    pre[0] = nums[0];
    suff[n - 1] = nums[n - 1];
    for (int i = 1; i < n; i++) {
      pre[i] = min(pre[i - 1], nums[i]);
    }
    for (int i = n - 2; i >= 0; i--) {
      suff[i] = max(suff[i + 1], nums[i]);
    }
    for (int i = 0; i < n; i++) {
      res = max(res, suff[i] - pre[i]);
    }
    if (res == 0) return -1;
    return res;
  }
}
