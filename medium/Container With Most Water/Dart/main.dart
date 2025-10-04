// Problem: Container With Most Water
// Link to the problem: https://leetcode.com/problems/container-with-most-water/
class Solution {
  int maxArea(List<int> height) {
    int ans = 0, n = height.length;
    int left = 0, right = n - 1;
    while (left <= right) {
      int vol = (right - left) * min(height[left], height[right]);
      ans = max(ans, vol);
      if (height[left] <= height[right]) {
        left++;
      } else {
        right--;
      }
    }
    return ans;
  }
}
