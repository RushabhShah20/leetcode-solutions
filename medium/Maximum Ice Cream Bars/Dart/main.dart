// Problem: Maximum Ice Cream Bars
// Link to the problem: https://leetcode.com/problems/maximum-ice-cream-bars
class Solution {
  int maxIceCream(List<int> costs, int coins) {
    final int n = costs.length;
    int mx = 0;
    for (int i = 0; i < n; i++) {
      mx = max(mx, costs[i]);
    }
    List<int> a = new List.filled(mx + 1, 0);
    for (int i = 0; i < n; i++) {
      a[costs[i]]++;
    }
    int ans = 0;
    for (int i = 1; i <= mx; i++) {
      if (a[i] == 0) {
        continue;
      }
      if (coins < i) {
        break;
      }
      final int x = min(a[i], coins ~/ i);
      coins -= i * x;
      ans += x;
    }
    return ans;
  }
}
