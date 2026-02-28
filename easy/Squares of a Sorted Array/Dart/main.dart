// Problem: Squares of a Sorted Array
// Link to the problem: https://leetcode.com/problems/squares-of-a-sorted-array/
class Solution {
  List<int> sortedSquares(List<int> nums) {
    final int n = nums.length;
    List<int> ans = new List.filled(n, 0);
    int l = 0, r = n - 1, i = n - 1;
    while (l <= r) {
      final int x = nums[l] * nums[l], y = nums[r] * nums[r];
      if (x > y) {
        ans[i] = x;
        l++;
      } else {
        ans[i] = y;
        r--;
      }
      i--;
    }
    return ans;
  }
}
