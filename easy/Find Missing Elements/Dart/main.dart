// Problem: Find Missing Elements
// Link to the problem: https://leetcode.com/problems/find-missing-elements/
class Solution {
  List<int> findMissingElements(List<int> nums) {
    final int n = nums.length;
    int mn = 101, mx = 1;
    for (int i = 0; i < n; i++) {
      mn = min(mn, nums[i]);
      mx = max(mx, nums[i]);
    }
    final int m = mx - mn + 1;
    List<int> a = new List.filled(m, 0);
    for (int i = 0; i < n; i++) {
      a[nums[i] - mn]++;
    }
    List<int> ans = new List.empty(growable: true);
    for (int i = 0; i < m; i++) {
      if (a[i] == 0) {
        ans.add(i + mn);
      }
    }
    return ans;
  }
}
