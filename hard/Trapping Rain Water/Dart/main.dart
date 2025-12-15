// Problem: Trapping Rain Water
// Link to the problem: https://leetcode.com/problems/trapping-rain-water/
class Solution {
  int trap(List<int> height) {
    int i = 0, left_max = height[0], ans = 0;
    int j = height.length - 1, right_max = height[j];
    while (i < j) {
      if (left_max <= right_max) {
        ans += (left_max - height[i]);
        i++;
        left_max = max(left_max, height[i]);
      } else {
        ans += (right_max - height[j]);
        j--;
        right_max = max(right_max, height[j]);
      }
    }
    return ans;
  }
}
