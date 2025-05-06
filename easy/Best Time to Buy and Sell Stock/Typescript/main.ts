// Problem: Best Time to Buy and Sell Stock
// Link to the problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
function maxProfit(prices: number[]): number {
    let ans:number = 0;
    let minPrice = Number.MAX_VALUE;
    for (let i = 0; i < prices.length; i++) {
        minPrice = Math.min(minPrice, prices[i]);
        ans = Math.max(ans, prices[i] - minPrice);
    }
    return ans;
};