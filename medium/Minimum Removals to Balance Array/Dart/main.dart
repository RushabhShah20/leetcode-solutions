// Problem: Minimum Removals to Balance Array
// Link to the problem: https://leetcode.com/problems/minimum-removals-to-balance-array/
class Solution {
  int minRemoval(List<int> nums, int k) {
    final int n = nums.length;
    int i = 0, ans = 0;
    nums.sort();
    for (int j = 0; j < n; j++) {
      while (nums[j] > nums[i] * k) {
        i++;
      }
      ans = max(ans, j - i + 1);
    }
    ans = n - ans;
    return ans;
  }
}
