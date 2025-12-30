// Problem: K Radius Subarray Averages
// Link to the problem: https://leetcode.com/problems/k-radius-subarray-averages/
class Solution {
  List<int> getAverages(List<int> nums, int k) {
    final int n = nums.length, m = (2 * k) + 1;
    List<int> ans = new List.filled(n, -1);
    int sum = 0;
    for (int i = 0; i < n; i++) {
      if (i >= m) {
        sum += nums[i];
        sum -= nums[i - m];
      } else {
        sum += nums[i];
      }
      if (i >= m - 1) {
        ans[i - k] = (sum ~/ m);
      }
    }
    return ans;
  }
}
