// Problem: Removing Minimum and Maximum From Array
// Link to the problem: https://leetcode.com/problems/removing-minimum-and-maximum-from-array/
class Solution {
  int minimumDeletions(List<int> nums) {
    final int n = nums.length;
    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
      if (nums[i] > nums[x]) {
        x = i;
      } else if (nums[i] < nums[y]) {
        y = i;
      }
    }
    final int a = max(x, y) + 1;
    final int b = n - min(x, y);
    final int c = (min(x, y) + 1) + (n - max(x, y));
    final int ans = min(a, min(b, c));
    return ans;
  }
}
