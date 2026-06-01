// Problem: Minimum Cost of Buying Candies With Discount
// Link to the problem: https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount/
class Solution {
  int minimumCost(List<int> cost) {
    final int n = cost.length;
    int ans = 0;
    cost.sort();
    for (int i = n - 1; i >= 0; i -= 3) {
      if (i - 1 >= 0) {
        ans += cost[i] + cost[i - 1];
      } else {
        ans += cost[i];
      }
    }
    return ans;
  }
}
