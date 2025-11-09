// Problem: Minimum Distance Between Three Equal Elements I
// Link to the problem: https://leetcode.com/problems/minimum-distance-between-three-equal-elements-i/
class Solution {
  int minimumDistance(List<int> nums) {
    int n = nums.length;
    int ans = 0x7FFFFFFFFFFFFFFF;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        for (int k = 0; k < n; k++) {
          if (i != j && j != k && i != k) {
            if (nums[i] == nums[j] && nums[j] == nums[k]) {
              ans = min(ans, (i - j).abs() + (j - k).abs() + (k - i).abs());
            }
          }
        }
      }
    }
    return ((ans == 0x7FFFFFFFFFFFFFFF) ? (-1) : (ans));
  }
}
