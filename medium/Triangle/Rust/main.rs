// Problem: Triangle
// Link to the problem: https://leetcode.com/problems/triangle/
impl Solution {
    pub fn minimum_total(triangle: Vec<Vec<i32>>) -> i32 {
        let mut n: usize = triangle.len();
        let mut dp: Vec<i32> = vec![0; n];
        for i in 0..n {
            dp[i] = triangle[n - 1][i];
        }
        for i in (0..n - 1).rev() {
            for j in 0..triangle[i].len() {
                dp[j] = triangle[i][j] + dp[j].min(dp[j + 1]);
            }
        }
        return dp[0];
    }
}
