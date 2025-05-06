// Problem: Best Time to Buy and Sell Stock
// Link to the problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
  int maxProfit(List<int> prices) {
    int ans = 0;
    int minPrice = 0x7FFFFFFFFFFFFFFF;
    for (int i = 0; i < prices.length; i++) {
      minPrice = min(minPrice, prices[i]);
      ans = max(ans, prices[i] - minPrice);
    }
    return ans;
  }
}
