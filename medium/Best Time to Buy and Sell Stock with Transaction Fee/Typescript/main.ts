// Problem: Best Time to Buy and Sell Stock with Transaction Fee
// Link to the problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/
function maxProfit(prices: number[], fee: number): number {
    let buy: number = -50001, sell: number = 0;
    for (const price of prices) {
        buy = Math.max(buy, sell - price);
        sell = Math.max(sell, buy + price - fee);
    }
    const ans: number = sell;
    return ans;
};