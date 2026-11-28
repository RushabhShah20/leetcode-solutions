// Problem: Maximum Number of Items From Sale II
// Link to the problem: https://leetcode.com/problems/maximum-number-of-items-from-sale-ii/
class Solution {
  int maximumSaleItems(List<List<int>> items, int budget) {
    final int n = items.length;
    items.sort((List<int> p, List<int> q) => p[1].compareTo(q[1]));
    int mx = 0;
    for (int i = 0; i < n; i++) {
      mx = max(mx, items[i][0]);
    }
    final List<int> a = List<int>.filled(mx + 1, 0);
    for (int i = 0; i < n; i++) {
      a[items[i][0]]++;
    }
    for (int i = 1; i <= mx; i++) {
      if (a[i] > 0) {
        for (int j = i << 1; j <= mx; j += i) {
          a[i] += a[j];
        }
      }
    }
    final int mn = items[0][1];
    int ans = 0;
    for (int i = 0; i < n; i++) {
      final int x = items[i][0];
      final int y = items[i][1];
      if (y - mn > mn) {
        break;
      }
      final int b = a[x] - 1;
      final int c = min(b, budget ~/ y);
      ans += c << 1;
      budget -= c * y;
    }
    ans += budget ~/ mn;
    return ans;
  }
}
