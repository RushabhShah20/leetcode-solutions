// Problem: Best Time to Buy and Sell Stock with Transaction Fee
// Link to the problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/
class Solution {
    public int maxProfit(int[] prices, int fee) {
        int buy = -50001, sell = 0;
        for (final int price : prices) {
            buy = Math.max(buy, sell - price);
            sell = Math.max(sell, buy + price - fee);
        }
        final int ans = sell;
        return ans;
    }
}