// Problem: Search Insert Position
// Link to the problem: https://leetcode.com/problems/search-insert-position/
class Solution {
  int searchInsert(List<int> nums, int target) {
    final int n = nums.length;
    int l = 0, r = n - 1;
    while (l <= r) {
      final int m = (l + r) ~/ 2;
      if (nums[m] == target) {
        return m;
      }
      if (nums[m] < target) {
        l = m + 1;
      } else {
        r = m - 1;
      }
    }
    return l;
  }
}
