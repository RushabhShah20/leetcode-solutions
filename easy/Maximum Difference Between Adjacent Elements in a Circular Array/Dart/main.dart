// Problem: Maximum Difference Between Adjacent Elements in a Circular Array
// Link to the problem: https://leetcode.com/problems/maximum-difference-between-adjacent-elements-in-a-circular-array/
class Solution {
  int maxAdjacentDistance(List<int> nums) {
    int ans = 0;
    for (int i = 1; i < nums.length; i++) {
      ans = max((nums[i] - nums[i - 1]).abs(), ans);
    }
    ans = max((nums[nums.length - 1] - nums[0]).abs(), ans);
    return ans;
  }
}
