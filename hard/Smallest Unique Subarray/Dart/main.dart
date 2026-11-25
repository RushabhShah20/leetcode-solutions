// Problem: Smallest Unique Subarray
// Link to the problem: https://leetcode.com/problems/smallest-unique-subarray/
class Solution {
  bool check(List<int> a, int k) {
    final int n = a.length;
    final Map<int, int> m = <int, int>{};
    const int p1 = 31, p2 = 37, m1 = 1000000007, m2 = 1000000009;
    int e1 = 1, e2 = 1, h1 = 0, h2 = 0;
    for (int i = 0; i < k; i++) {
      h1 = (h1 * p1 % m1 + a[i]) % m1;
      h2 = (h2 * p2 % m2 + a[i]) % m2;
    }
    for (int i = 1; i < k; i++) {
      e1 = e1 * p1 % m1;
      e2 = e2 * p2 % m2;
    }
    int key = h1 * m2 + h2;
    m[key] = 1;
    for (int i = k; i < n; i++) {
      final int x1 = a[i - k] * e1 % m1;
      h1 = (h1 - x1 + m1) % m1;
      h1 = (h1 * p1 % m1 + a[i]) % m1;
      final int x2 = a[i - k] * e2 % m2;
      h2 = (h2 - x2 + m2) % m2;
      h2 = (h2 * p2 % m2 + a[i]) % m2;
      key = h1 * m2 + h2;
      m[key] = (m[key] ?? 0) + 1;
    }
    for (final int count in m.values) {
      if (count == 1) {
        return false;
      }
    }
    return true;
  }

  int smallestUniqueSubarray(List<int> nums) {
    final int n = nums.length;
    int ans = n, l = 1, r = n;
    while (l <= r) {
      final int m = l + (r - l) ~/ 2;
      if (check(nums, m)) {
        l = m + 1;
      } else {
        ans = m;
        r = m - 1;
      }
    }
    return ans;
  }
}
