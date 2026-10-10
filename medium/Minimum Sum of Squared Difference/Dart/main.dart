// Problem: Minimum Sum of Squared Difference
// Link to the problem: https://leetcode.com/problems/minimum-sum-of-squared-difference/
class Solution {
  int minSumSquareDiff(List<int> nums1, List<int> nums2, int k1, int k2) {
    final int n = nums1.length;
    int ans = 0, k = k1 + k2, x = 0, y = 0;
    for (int i = 0; i < n; i++) {
      nums1[i] = (nums1[i] - nums2[i]).abs();
      x = max(x, nums1[i]);
    }
    int l = 0, r = x;
    while (l <= r) {
      final int m = (l + r) >> 1;
      int a = 0;
      for (int i = 0; i < n; i++) {
        a += nums1[i] > m ? nums1[i] - m : 0;
      }
      final bool z = a <= k;
      if (z) {
        y = m;
        r = m - 1;
      } else {
        l = m + 1;
      }
    }
    for (int i = 0; i < n; i++) {
      if (nums1[i] > y) {
        k -= nums1[i] - y;
      }
    }
    nums1.sort();
    for (int i = n - 1; i >= 0; i--) {
      int b = min(y, nums1[i]);
      if (k > 0 && b > 0) {
        k--;
        b--;
      }
      ans += b * b;
    }
    return ans;
  }
}
