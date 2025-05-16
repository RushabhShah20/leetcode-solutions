// Problem: Calculate Amount Paid in Taxes
// Link to the problem: https://leetcode.com/problems/calculate-amount-paid-in-taxes/
impl Solution {
    pub fn calculate_tax(brackets: Vec<Vec<i32>>, income: i32) -> f64 {
        let mut ans: f64 = 0.0;
        if (income >= brackets[0][0]) {
            ans = ((brackets[0][0] * brackets[0][1]) as f64 / 100.0);
        } else {
            return ((income * brackets[0][1]) as f64 / 100.0);
        }
        for i in 1..brackets.len() {
            if (income >= (brackets[i][0])) {
                ans += (((brackets[i][0] - brackets[i - 1][0]) * brackets[i][1]) as f64 / 100.0);
            } else {
                ans += (((income - brackets[i - 1][0]) * brackets[i][1]) as f64 / 100.0);
                break;
            }
        }
        return ans;
    }
}
