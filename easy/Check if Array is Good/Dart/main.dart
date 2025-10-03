// Problem: Check if Array is Good
// Link to the problem: https://leetcode.com/problems/check-if-array-is-good/
class Solution {
  bool isGood(List<int> nums) {
    if (nums.length == 1) {
      return false;
    }
    int n = nums.length;
    nums.sort();
    for (int i = 0; i < n - 1; i++) {
      if (nums[i] != i + 1) {
        return false;
      }
    }
    if (nums[n - 1] != n - 1) {
      return false;
    }
    return true;
  }
}
