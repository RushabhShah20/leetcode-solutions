// Problem: Maximum Alternating Sum of Squares
// Link to the problem: https://leetcode.com/problems/maximum-alternating-sum-of-squares/
class Solution {
  int maxAlternatingSum(List<int> nums) {
    final int n = nums.length;
    int ans = 0;
    for (int i = 0; i < n; i++) {
      nums[i] *= nums[i];
    }
    nums.sort();
    for (int i = 0; i < n; i++) {
      if (i < (n >> 1)) {
        ans -= nums[i];
      } else {
        ans += nums[i];
      }
    }
    return ans;
  }
}
