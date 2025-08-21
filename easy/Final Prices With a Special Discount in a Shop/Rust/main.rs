// Problem: Final Prices With a Special Discount in a Shop
// Link to the problem: https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/
impl Solution {
    pub fn final_prices(prices: Vec<i32>) -> Vec<i32> {
        let mut ans: Vec<i32> = vec![0; prices.len()];
        for i in 0..prices.len() {
            ans[i] = prices[i];
            for j in i + 1..prices.len() {
                if (prices[j] <= prices[i]) {
                    ans[i] = prices[i] - prices[j];
                    break;
                }
            }
        }
        return ans;
    }
}
