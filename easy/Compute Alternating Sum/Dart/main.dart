// Problem: Compute Alternating Sum
// Link to the problem: https://leetcode.com/problems/compute-alternating-sum/
class Solution {
  int alternatingSum(List<int> nums) {
    int ans = 0;
    for (int i = 0; i < nums.length; i++) {
      if (i % 2 == 0) {
        ans += nums[i];
      } else {
        ans -= nums[i];
      }
    }
    return ans;
  }
}
