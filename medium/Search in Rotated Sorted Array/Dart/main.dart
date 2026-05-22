// Problem: Search in Rotated Sorted Array
// Link to the problem: https://leetcode.com/problems/search-in-rotated-sorted-array/
class Solution {
  int search(List<int> nums, int target) {
    final int n = nums.length;
    int l = 0, r = n - 1;
    while (l <= r) {
      final int m = l + (r - l) ~/ 2;
      if (nums[m] == target) {
        return m;
      }
      if (nums[m] >= nums[l]) {
        if (nums[l] <= target && target < nums[m]) {
          r = m - 1;
        } else {
          l = m + 1;
        }
      } else {
        if (nums[m] < target && nums[r] >= target) {
          l = m + 1;
        } else {
          r = m - 1;
        }
      }
    }
    return -1;
  }
}
