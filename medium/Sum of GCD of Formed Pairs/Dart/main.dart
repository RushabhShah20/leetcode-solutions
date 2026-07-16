// Problem: Sum of GCD of Formed Pairs
// Link to the problem: https://leetcode.com/problems/sum-of-gcd-of-formed-pairs/
class Solution {
  int gcd(final int a, final int b) {
    return b == 0 ? a : gcd(b, a % b);
  }

  int gcdSum(List<int> nums) {
    final int n = nums.length;
    int mx = 0;
    List<int> a = new List.filled(n, 0);
    for (int i = 0; i < n; i++) {
      mx = max(mx, nums[i]);
      a[i] = gcd(mx, nums[i]);
    }
    int ans = 0;
    a.sort();
    int l = 0, r = n - 1;
    while (l < r) {
      ans += gcd(a[l], a[r]);
      l++;
      r--;
    }
    return ans;
  }
}
