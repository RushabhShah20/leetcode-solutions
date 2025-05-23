// Problem: Left and Right Sum Differences
// Link to the problem: https://leetcode.com/problems/left-and-right-sum-differences/
class Solution {
  List<int> leftRightDifference(List<int> nums) {
    List<int> ans = new List.filled(nums.length, 0),
        left = new List.filled(nums.length, 0),
        right = new List.filled(nums.length, 0);
    int sum = 0;
    for (int i = 0; i < nums.length; i++) {
      left[i] = sum;
      sum += nums[i];
    }
    sum = 0;
    for (int i = nums.length - 1; i >= 0; i--) {
      right[i] = sum;
      sum += nums[i];
    }
    for (int i = 0; i < nums.length; i++) {
      ans[i] = (left[i] - right[i]).abs();
    }
    return ans;
  }
}
