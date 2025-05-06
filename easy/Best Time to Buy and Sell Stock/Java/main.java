// Problem: Best Time to Buy and Sell Stock
// Link to the problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
    public int maxProfit(int[] prices) {
        int ans = 0;
        int minPrice = Integer.MAX_VALUE;
        for (int i = 0; i < prices.length; i++) {
            minPrice = Math.min(minPrice, prices[i]);
            ans = Math.max(ans, prices[i] - minPrice);
        }
        return ans;
    }
}