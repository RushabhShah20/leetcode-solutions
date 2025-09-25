// Problem: Maximum Ascending Subarray Sum
// Link to the problem: https://leetcode.com/problems/maximum-ascending-subarray-sum/
class Solution {
  int maxAscendingSum(List<int> nums) {
    int ans = 0, sum = nums[0];
    for (int i = 1; i < nums.length; i++) {
      if (nums[i] > nums[i - 1]) {
        sum += nums[i];
      } else {
        ans = max(ans, sum);
        sum = nums[i];
      }
    }
    ans = max(ans, sum);
    return ans;
  }
}
