// Problem: Maximum Total Subarray Value I
// Link to the problem: https://leetcode.com/problems/maximum-total-subarray-value-i/
class Solution {
  int maxTotalValue(List<int> nums, int k) {
    int ans = 0;
    int maxELement = nums[0], minElement = nums[0];
    for (int i = 1; i < nums.length; i++) {
      if (maxELement < nums[i]) {
        maxELement = nums[i];
      }
      if (minElement > nums[i]) {
        minElement = nums[i];
      }
    }
    ans = ((maxELement - minElement) * (k));
    return ans;
  }
}
