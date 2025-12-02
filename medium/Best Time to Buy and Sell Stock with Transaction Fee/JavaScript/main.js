// Problem: Best Time to Buy and Sell Stock with Transaction Fee
// Link to the problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/
/**
 * @param {number[]} prices
 * @param {number} fee
 * @return {number}
 */
var maxProfit = function (prices, fee) {
    let buy = -50001, sell = 0;
    for (const price of prices) {
        buy = Math.max(buy, sell - price);
        sell = Math.max(sell, buy + price - fee);
    }
    const ans = sell;
    return ans;
};