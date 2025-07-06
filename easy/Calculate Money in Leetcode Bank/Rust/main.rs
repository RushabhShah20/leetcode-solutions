// Problem: Calculate Money in Leetcode Bank
// Link to the problem: https://leetcode.com/problems/calculate-money-in-leetcode-bank/
impl Solution {
    pub fn total_money(n: i32) -> i32 {
        let mut q: i32 = n / 7;
        let mut r: i32 = n % 7;
        let mut ans: i32 = ((q * (q - 1)) / 2) * 7;
        ans += q * 28;
        ans += ((r * (r + 1)) / 2) + (q * r);
        return ans;
    }
}
