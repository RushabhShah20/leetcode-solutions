// Problem: Best Time to Buy and Sell Stock with Transaction Fee
// Link to the problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/
impl Solution {
    pub fn max_profit(prices: Vec<i32>, fee: i32) -> i32 {
        let mut buy: i32 = -50001;
        let mut sell: i32 = 0;
        for price in prices {
            buy = buy.max(sell - price);
            sell = sell.max(buy + price - fee);
        }
        let ans: i32 = sell;
        return ans;
    }
}
