// Problem: Best Time to Buy and Sell Stock with Transaction Fee
// Link to the problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/
class Solution {
  int maxProfit(List<int> prices, int fee) {
    int buy = -50001, sell = 0;
    for (final int price in prices) {
      buy = max(buy, sell - price);
      sell = max(sell, buy + price - fee);
    }
    int ans = sell;
    return ans;
  }
}
