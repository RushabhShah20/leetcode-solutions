// Problem: Maximum Ice Cream Bars
// Link to the problem: https://leetcode.com/problems/maximum-ice-cream-bars
class Solution {
  int maxIceCream(List<int> costs, int coins) {
    int ans = 0, sum = 0;
    costs.sort();
    for (int i = 0; i < costs.length; i++) {
      sum += costs[i];
      if (sum <= coins) {
        ans++;
      } else {
        break;
      }
    }
    return ans;
  }
}
