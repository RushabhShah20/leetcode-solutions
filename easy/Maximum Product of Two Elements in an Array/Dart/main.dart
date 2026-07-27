// Problem: Maximum Product of Two Elements in an Array
// Link to the problem: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
class Solution {
  int maxProduct(List<int> nums) {
    final int n = nums.length;
    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
      if (nums[i] > x) {
        y = x;
        x = nums[i];
      } else if (nums[i] > y) {
        y = nums[i];
      }
    }
    final int ans = (x - 1) * (y - 1);
    return ans;
  }
}
