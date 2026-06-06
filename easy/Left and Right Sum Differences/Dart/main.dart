// Problem: Left and Right Sum Differences
// Link to the problem: https://leetcode.com/problems/left-and-right-sum-differences/
class Solution {
  List<int> leftRightDifference(List<int> nums) {
    final int n = nums.length;
    List<int> ans = new List.filled(n, 0),
        left = new List.filled(n, 0),
        right = new List.filled(n, 0);
    int sum = 0;
    for (int i = 0; i < n; i++) {
      left[i] = sum;
      sum += nums[i];
    }
    sum = 0;
    for (int i = n - 1; i >= 0; i--) {
      right[i] = sum;
      sum += nums[i];
    }
    for (int i = 0; i < n; i++) {
      ans[i] = (left[i] - right[i]).abs();
    }
    return ans;
  }
}
