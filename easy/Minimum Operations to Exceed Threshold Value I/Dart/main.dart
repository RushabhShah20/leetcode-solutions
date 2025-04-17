// Problem: Minimum Operations to Exceed Threshold Value I
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-i/
class Solution {
  int minOperations(List<int> nums, int k) {
    int ans = 0;
    for (var i = 0; i < nums.length; i++) {
      if (nums[i] < k) {
        ans++;
      }
    }
    return ans;
  }
}
