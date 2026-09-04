// Problem: Smallest Stable Index I
// Link to the problem: https://leetcode.com/problems/smallest-stable-index-i/
class Solution {
  int firstStableIndex(List<int> nums, int k) {
    final int n = nums.length;
    List<int> mn = new List.filled(n, 0), mx = new List.filled(n, 0);
    mx[0] = nums[0];
    for (int i = 1; i < n; i++) {
      mx[i] = max(mx[i - 1], nums[i]);
    }
    mn[n - 1] = nums[n - 1];
    for (int i = n - 2; i >= 0; i--) {
      mn[i] = min(mn[i + 1], nums[i]);
    }
    for (int i = 0; i < n; i++) {
      if (mx[i] - mn[i] <= k) {
        return i;
      }
    }
    return -1;
  }
}
