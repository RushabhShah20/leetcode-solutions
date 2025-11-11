// Problem: Ones and Zeroes
// Link to the problem: https://leetcode.com/problems/ones-and-zeroes/
impl Solution {
    pub fn find_max_form(strs: Vec<String>, m: i32, n: i32) -> i32 {
        let mut dp: Vec<Vec<i32>> = vec![vec![0; (n + 1) as usize]; (m + 1) as usize];
        for str in strs {
            let mut zeroes: usize = 0;
            let mut ones: usize = 0;
            for ch in str.bytes() {
                if (ch == b'0') {
                    zeroes += 1;
                } else {
                    ones += 1;
                }
            }
            for i in (zeroes..=(m as usize)).rev() {
                for j in (ones..=(n as usize)).rev() {
                    dp[i][j] = dp[i][j].max(1 + dp[i - zeroes][j - ones]);
                }
            }
        }
        return dp[m as usize][n as usize];
    }
}
