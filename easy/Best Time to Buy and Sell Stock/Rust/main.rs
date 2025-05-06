// Problem: Best Time to Buy and Sell Stock
// Link to the problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
impl Solution {
    pub fn max_profit(prices: Vec<i32>) -> i32 {
        let mut ans: i32 = 0;
        let mut minPrice: i32 = i32::MAX;
        for i in 0..prices.len() {
            minPrice = std::cmp::min(minPrice, prices[i]);
            ans = std::cmp::max(ans, prices[i] - minPrice);
        }
        return ans;
    }
}
