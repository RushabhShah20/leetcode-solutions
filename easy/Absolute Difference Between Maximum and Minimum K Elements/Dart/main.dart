// Problem: Absolute Difference Between Maximum and Minimum K Elements
// Link to the problem: https://leetcode.com/problems/absolute-difference-between-maximum-and-minimum-k-elements/
class Solution {
  int absDifference(List<int> nums, int k) {
    nums.sort();
    int ans = 0, n = nums.length;
    for (int i = 0; i < k; i++) {
      ans += (-nums[i] + nums[n - i - 1]);
    }
    return ans;
  }
}
