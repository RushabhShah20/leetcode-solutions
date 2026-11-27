// Problem: Maximum Number of Items From Sale I
// Link to the problem: https://leetcode.com/problems/maximum-number-of-items-from-sale-i/
class Solution {
  int maximumSaleItems(List<List<int>> items, int budget) {
    final int n = items.length;
    List<int> a = new List.filled(budget + 1, 0);
    int x = 1000000000;
    for (int i = 0; i < n; i++) {
      final int y = items[i][0], z = items[i][1];
      x = min(x, z);
      int b = 0;
      for (int j = 0; j < n; j++) {
        if (items[j][0] % y == 0) {
          b++;
        }
      }
      for (int j = budget; j >= z; j--) {
        a[j] = max(a[j], a[j - z] + b);
      }
    }
    int ans = 0;
    for (int i = 0; i <= budget; i++) {
      ans = max(ans, a[i] + (budget - i) ~/ x);
    }
    return ans;
  }
}
