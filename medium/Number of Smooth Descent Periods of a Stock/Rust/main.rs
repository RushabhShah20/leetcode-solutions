// Problem: Number of Smooth Descent Periods of a Stock
// Link to the problem: https://leetcode.com/problems/number-of-smooth-descent-periods-of-a-stock/
impl Solution {
    pub fn get_descent_periods(prices: Vec<i32>) -> i64 {
        let mut ans: i64 = 0;
        let mut count: i32 = 1;
        let mut a: Vec<i32> = Vec::new();
        for i in 1..prices.len() {
            if (prices[i] == prices[i - 1] - 1) {
                count += 1;
            } else {
                a.push(count);
                count = 1;
            }
        }
        a.push(count);
        for i in 0..a.len() {
            ans += ((a[i] as i64) * ((a[i] + 1) as i64) / 2);
        }
        return ans;
    }
}
